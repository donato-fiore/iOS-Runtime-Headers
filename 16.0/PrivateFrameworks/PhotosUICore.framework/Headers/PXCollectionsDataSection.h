// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCOLLECTIONSDATASECTION_H
#define PXCOLLECTIONSDATASECTION_H



#import "PXDataSection.h"

@interface PXCollectionsDataSection : PXDataSection



-(NSInteger)countForCollection:(id)arg0 ;
-(NSInteger)indexOfCollection:(id)arg0 ;
-(NSUInteger)lockStateForCollection:(id)arg0 ;
-(id)existingAssetsFetchResultAtIndex:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCollectionsDataSource:(id)arg0 ;
-(id)initWithCollectionsDataSource:(id)arg0 lockStatePerCollection:(id)arg1 ;
-(id)initWithDisplayCollection:(id)arg0 ;
-(id)initWithDisplayCollection:(id)arg0 lockState:(NSUInteger)arg1 ;


@end


#endif