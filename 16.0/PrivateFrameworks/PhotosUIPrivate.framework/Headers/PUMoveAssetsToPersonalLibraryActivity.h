// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUMOVEASSETSTOPERSONALLIBRARYACTIVITY_H
#define PUMOVEASSETSTOPERSONALLIBRARYACTIVITY_H

@class PXActivity, UIViewController;



@interface PUMoveAssetsToPersonalLibraryActivity : PXActivity {
    UIViewController *_presenterViewController;
}




-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;


@end


#endif