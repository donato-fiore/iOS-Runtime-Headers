// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSTORELIBRARYPERSONALIZATIONRESPONSE_H
#define MPSTORELIBRARYPERSONALIZATIONRESPONSE_H

@class NSString;
@protocol MPModelResponseDetailedKeepLocalStatusRequesting;


#import "MPModelResponse.h"
#import "MPSectionedCollection.h"

@interface MPStoreLibraryPersonalizationResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPModelResponse *libraryResponse; // ivar: _libraryResponse
@property (retain, nonatomic) MPSectionedCollection *representedObjectResults; // ivar: _representedObjectResults
@property (readonly) Class superclass;


-(id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(NSInteger)arg0 responseHandler:(id)arg1 ;
-(void)_libraryResponseDidInvalidateNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif