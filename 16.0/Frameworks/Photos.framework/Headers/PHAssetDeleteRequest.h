// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETDELETEREQUEST_H
#define PHASSETDELETEREQUEST_H



#import "PHTrashableObjectDeleteRequest.h"
#import "PHAssetDeleteOptions.h"

@interface PHAssetDeleteRequest : PHTrashableObjectDeleteRequest

@property (copy, nonatomic) PHAssetDeleteOptions *deleteOptions; // ivar: _deleteOptions


-(BOOL)validateForDeleteManagedObject:(id)arg0 error:(*id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)_updateSyndicationStateForSyndicationIdentifier:(id)arg0 savedAssetType:(short)arg1 sourceLibraryID:(NSInteger)arg2 ;
-(void)deleteManagedObject:(id)arg0 photoLibrary:(id)arg1 ;
-(void)encodeToXPCDict:(id)arg0 ;


@end


#endif