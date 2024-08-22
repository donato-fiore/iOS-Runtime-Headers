// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONLISTVIEWCLUSTERANIMATOR_H
#define SBICONLISTVIEWCLUSTERANIMATOR_H

@class NSMutableDictionary, NSString;
@protocol SBIconListLayoutAnimating;

#import <Foundation/Foundation.h>

#import "SBHIconEditingSettings.h"

@interface SBIconListViewClusterAnimator : NSObject <SBIconListLayoutAnimating>

 {
    SBHIconEditingSettings *_iconEditingSettings;
    NSMutableDictionary *_removalDirectionForIcons;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)iconListView:(id)arg0 wantsAnimatedLayoutForIconView:(id)arg1 withParameters:(struct SBIconListLayoutAnimationParameters )arg2 alongsideAnimationBlock:(id)arg3 ;
-(void)iconListView:(id)arg0 wantsAnimatedRemovalForIconViews:(id)arg1 completionHandler:(id)arg2 ;
-(void)setRemovalDirection:(NSUInteger)arg0 forIcon:(id)arg1 ;


@end


#endif