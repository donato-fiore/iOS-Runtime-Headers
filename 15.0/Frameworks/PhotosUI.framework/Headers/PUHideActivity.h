// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUHIDEACTIVITY_H
#define PUHIDEACTIVITY_H

@class PXActivity;


#import "PUAssetHidingHelper.h"

@interface PUHideActivity : PXActivity {
    PUAssetHidingHelper *_assetHidingHelper;
}




+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_assetHidingHelper;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;
-(void)setItemSourceController:(id)arg0 ;


@end


#endif