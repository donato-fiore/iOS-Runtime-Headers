// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONLISTVIEWDEFAULTANIMATOR_H
#define SBICONLISTVIEWDEFAULTANIMATOR_H

@class NSString;
@protocol SBIconListLayoutAnimating;

#import <Foundation/Foundation.h>

#import "SBHIconEditingSettings.h"

@interface SBIconListViewDefaultAnimator : NSObject <SBIconListLayoutAnimating>

 {
    SBHIconEditingSettings *_iconEditingSettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)iconListView:(id)arg0 wantsAnimatedLayoutForIconView:(id)arg1 withParameters:(struct SBIconListLayoutAnimationParameters )arg2 alongsideAnimationBlock:(id)arg3 ;
-(void)iconListView:(id)arg0 wantsAnimatedRemovalForIconViews:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif