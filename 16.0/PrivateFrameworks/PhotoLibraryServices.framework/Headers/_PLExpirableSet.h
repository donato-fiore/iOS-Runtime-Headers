// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PLEXPIRABLESET_H
#define _PLEXPIRABLESET_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _PLExpirableSet : NSObject {
    NSMutableSet *_set;
    NSMutableDictionary *_recentTouches;
    CGFloat _secondsToExpire;
}




-(BOOL)_didExpireObject:(id)arg0 ;
-(BOOL)containsObject:(id)arg0 ;
-(id)initWithSecondsToExpire:(CGFloat)arg0 ;
-(void)_touch:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)removeObject:(id)arg0 ;


@end


#endif