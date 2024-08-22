// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIADDTOHOMESCREENACTIVITY_H
#define UIADDTOHOMESCREENACTIVITY_H

@class UIViewController;


#import "UIActivity.h"

@interface UIAddToHomeScreenActivity : UIActivity {
    UIViewController *_addToHomeScreenViewController;
}




+(NSUInteger)_xpcAttributes;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_embeddedActivityViewController;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif