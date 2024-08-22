// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXACTIVITY_H
#define PXACTIVITY_H

@class UIActivity, UIImage, NSString;
@protocol PXActivity, PXActivityActionDelegate, PXActivityDataSource, PXActivityItemSourceController;



@interface PXActivity : UIActivity <PXActivity>

 {
    ? _dataSourceFlags;
    UIImage *_cachedCustomImage;
    UIImage *_cachedSmallCustomImage;
    NSString *_internalActivityType;
}


@property (weak, nonatomic) NSObject<PXActivityActionDelegate> *actionDelegate; // ivar: _actionDelegate
@property (copy, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (copy, nonatomic) NSString *actionType; // ivar: _actionType
@property (copy, nonatomic) id *canPerformActivityActionHandler; // ivar: _canPerformActivityActionHandler
@property (weak, nonatomic) NSObject<PXActivityDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXActivityItemSourceController> *itemSourceController; // ivar: _itemSourceController
@property (copy, nonatomic) id *performActivityActionHandler; // ivar: _performActivityActionHandler
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName


+(id)_destructiveActivities;
+(id)activityWithActionTitle:(id)arg0 actionType:(id)arg1 activityType:(id)arg2 systemImageName:(id)arg3 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityTitle;
-(id)activityType;
-(id)createActivityBundleImageConfigurationForBundle:(id)arg0 imageNamed:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(id)initWithActionTitle:(id)arg0 actionType:(id)arg1 activityType:(id)arg2 systemImageName:(id)arg3 ;
-(id)px_activityImageNamed:(id)arg0 ;
-(id)px_activitySettingsImageNamed:(id)arg0 ;
-(void)performActivity;
-(void)tearDownForCompletion;
-(void)updateActivityViewControllerVisibleShareActions;


@end


#endif