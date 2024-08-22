// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUACTIVITY_H
#define PUACTIVITY_H

@class UIActivity, UIImage, NSString;
@protocol PUActivity, PUActivityDataSource;


#import "PUActivityItemSourceController.h"

@interface PUActivity : UIActivity <PUActivity>

 {
    ? _dataSourceFlags;
    UIImage *_cachedCustomImage;
    UIImage *_cachedSmallCustomImage;
}


@property (weak, nonatomic) NSObject<PUActivityDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PUActivityItemSourceController *itemSourceController; // ivar: _itemSourceController
@property (readonly) Class superclass;


-(id)createActivityBundleImageConfigurationForBundle:(id)arg0 imageNamed:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(id)pu_activityImageNamed:(id)arg0 ;
-(id)pu_activitySettingsImageNamed:(id)arg0 ;
-(void)tearDownForCompletion;
-(void)updateActivityViewControllerVisibleShareActions;


@end


#endif