// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWALLPAPERSTYLEINFO_H
#define SBWALLPAPERSTYLEINFO_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBWWallpaperEffectViewBase.h"

@interface SBWallpaperStyleInfo : NSObject <BSDescriptionProviding>

 {
    ? _priorityInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger highestValidPriority;
@property (nonatomic) ? styleTransitionState; // ivar: _styleTransitionState
@property (readonly) Class superclass;
@property (retain, nonatomic) SBWWallpaperEffectViewBase *wallpaperEffectView; // ivar: _wallpaperEffectView


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct ? )priorityInfoForPriority:(NSInteger)arg0 ;
-(void)enumerateValidPrioritiesUsingBlock:(id)arg0 ;
-(void)removePriorityInfoForPriority:(NSInteger)arg0 ;
-(void)setPriorityInfo:(struct ? )arg0 forPriority:(NSInteger)arg1 ;


@end


#endif