// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUADDTOALBUMACTIVITY_H
#define PUADDTOALBUMACTIVITY_H

@class PXActivity, UIViewController;



@interface PUAddToAlbumActivity : PXActivity {
    UIViewController *_presenterViewController;
}




+(NSInteger)activityCategory;
-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_activityBundleImageConfiguration;
-(id)_albumPickerViewControllerWithAssets:(id)arg0 ;
-(id)_syndicationAssetSavingHelperWithAssets:(id)arg0 ;
-(id)_systemImageName;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;


@end


#endif