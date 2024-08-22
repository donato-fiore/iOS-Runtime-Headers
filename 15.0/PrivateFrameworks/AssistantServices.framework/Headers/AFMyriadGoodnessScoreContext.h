// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFMYRIADGOODNESSSCORECONTEXT_H
#define AFMYRIADGOODNESSSCORECONTEXT_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "AFMyriadGoodnessScoreOverrideContext.h"

@interface AFMyriadGoodnessScoreContext : NSObject {
    AFMyriadGoodnessScoreOverrideContext *_overriddenContext;
}


@property (nonatomic) CGFloat mediaPlaybackInterruptedTime; // ivar: _mediaPlaybackInterruptedTime
@property (copy, nonatomic) NSSet *reasons; // ivar: _reasons


-(id)description;
-(id)getOverridingContext;
-(id)init;
-(void)setOverridingContext:(id)arg0 ;


@end


#endif