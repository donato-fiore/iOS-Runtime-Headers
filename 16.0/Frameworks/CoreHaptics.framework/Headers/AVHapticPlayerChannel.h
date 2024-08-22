// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVHAPTICPLAYERCHANNEL_H
#define AVHAPTICPLAYERCHANNEL_H


#import <Foundation/Foundation.h>

#import "AVHapticClient.h"

@interface AVHapticPlayerChannel : NSObject {
    NSUInteger _behavior;
}


@property NSUInteger chanID; // ivar: _chanID
@property (weak) AVHapticClient *client; // ivar: _client
@property NSUInteger eventBehavior;


-(BOOL)clearEvents:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)resetAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)scheduleParameterCurve:(NSUInteger)arg0 curve:(id)arg1 atTime:(CGFloat)arg2 error:(*id)arg3 ;
-(BOOL)sendEvents:(id)arg0 atTime:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)sendEvents:(id)arg0 withImmediateParameters:(id)arg1 atTime:(CGFloat)arg2 error:(*id)arg3 ;
-(BOOL)setParameter:(NSUInteger)arg0 value:(float)arg1 atTime:(CGFloat)arg2 error:(*id)arg3 ;
-(id)initWithChannelID:(id)arg0 client:(id)arg1 ;
-(void)invalidate;


@end


#endif