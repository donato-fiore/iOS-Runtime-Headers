// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKBRTDECAYINGOBJECT_H
#define _UIKBRTDECAYINGOBJECT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _UIKBRTDecayingObject : NSObject {
    NSMutableArray *_resetBlocks;
}


@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isDecaying; // ivar: _isDecaying
@property (readonly, nonatomic) BOOL isHolding; // ivar: _isHolding
@property (readonly, nonatomic) CGFloat lastUpdate; // ivar: _lastUpdate
@property (nonatomic) CGFloat timeoutDuration; // ivar: _timeoutDuration


-(id)initWithTimeoutDuration:(CGFloat)arg0 ;
-(void)onResetDo:(id)arg0 ;
-(void)reset;
-(void)resetActiveDecayTo:(CGFloat)arg0 ;
-(void)resetDecayTo:(CGFloat)arg0 ;
-(void)startDecaying;
-(void)startOrUpdateDecay;
-(void)updateDecay;


@end


#endif