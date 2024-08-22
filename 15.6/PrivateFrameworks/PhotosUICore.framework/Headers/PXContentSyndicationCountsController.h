// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCONTENTSYNDICATIONCOUNTSCONTROLLER_H
#define PXCONTENTSYNDICATIONCOUNTSCONTROLLER_H

@class NSString;
@protocol PXSettingsKeyObserver, PXContentSyndicationMutableCountsController, PXDisplayAssetCollection;


#import "PXObservable.h"

@interface PXContentSyndicationCountsController : PXObservable <PXSettingsKeyObserver, PXContentSyndicationMutableCountsController>

 {
    ? _detailedCounts;
    NSInteger _savedCount;
}


@property (readonly, nonatomic) ? actualDetailedCounts;
@property (readonly, nonatomic) NSInteger actualSavedCount;
@property (copy, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? detailedCounts;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger savedCount;
@property (readonly, nonatomic) NSString *savedCountDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *totalCountDescription;


-(id)init;
-(void)didSetAssetCollection:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif