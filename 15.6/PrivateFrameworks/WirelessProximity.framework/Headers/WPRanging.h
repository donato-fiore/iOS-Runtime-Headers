// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WPRANGING_H
#define WPRANGING_H

@protocol WPRangingDelegate;


#import "WPClient.h"

@interface WPRanging : WPClient

@property (weak, nonatomic) NSObject<WPRangingDelegate> *delegate; // ivar: _delegate


-(id)clientAsString;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)enableRanging:(BOOL)arg0 ;
-(void)enableRanging:(BOOL)arg0 reply:(id)arg1 ;
-(void)invalidate;
-(void)isRangingEnabledReply:(id)arg0 ;
-(void)rangingEnabled:(BOOL)arg0 withError:(id)arg1 ;
-(void)stateDidChange:(NSInteger)arg0 ;


@end


#endif