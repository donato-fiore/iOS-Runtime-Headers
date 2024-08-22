// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDELAYEDANIMATIONTRACKER_H
#define PKDELAYEDANIMATIONTRACKER_H

@class NSString, CALayer;

#import <Foundation/Foundation.h>


@interface PKDelayedAnimationTracker : NSObject

@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, weak, nonatomic) CALayer *layer; // ivar: _layer
@property (copy, nonatomic) id *removalAction; // ivar: _removalAction


-(id)init;
-(id)initWithLayer:(id)arg0 key:(id)arg1 ;
-(void)removeAnimationIfPossible;


@end


#endif