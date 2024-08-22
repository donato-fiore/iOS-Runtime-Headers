// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBADGECOUNTRECIPE_H
#define SBBADGECOUNTRECIPE_H

@class NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBBadgeCountRecipe : NSObject <SBTestRecipe>

 {
    NSUInteger _badgeCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)title;
-(void)_changeBadge:(NSUInteger)arg0 ;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif