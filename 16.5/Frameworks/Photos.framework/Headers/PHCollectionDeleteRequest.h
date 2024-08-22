// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHCOLLECTIONDELETEREQUEST_H
#define PHCOLLECTIONDELETEREQUEST_H



#import "PHTrashableObjectDeleteRequest.h"

@interface PHCollectionDeleteRequest : PHTrashableObjectDeleteRequest



-(BOOL)validateForDeleteManagedObject:(id)arg0 error:(*id)arg1 ;
-(void)deleteManagedObject:(id)arg0 photoLibrary:(id)arg1 ;


@end


#endif