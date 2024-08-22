// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBASEBANDLOGCHANNEL_H
#define PLBASEBANDLOGCHANNEL_H

@protocol PLBasebandLogChannelDelegate;

#import <Foundation/Foundation.h>


@interface PLBasebandLogChannel : NSObject {
    *__CFMessagePort remotePort;
    *__CFMessagePort localPort;
}


@property (nonatomic) BOOL cachingEnabled; // ivar: cachingEnabled
@property (nonatomic) NSObject<PLBasebandLogChannelDelegate> *delegate; // ivar: delegate
@property (readonly, nonatomic) BOOL isValid;


-(BOOL)openWithConnection:(id)arg0 ;
-(id)init;
-(void)close;
-(void)commitHardwareLogs;
-(void)connectionInvalidated:(id)arg0 ;
-(void)dealloc;
-(void)enableLogCodes:(id)arg0 andEvents:(id)arg1 andExtraCode:(id)arg2 ;
-(void)flush;
-(void)invalidate;
-(void)sendObjectOverRemotePort:(id)arg0 ;
-(void)setChannelTimeout:(CGFloat)arg0 ;
-(void)setHardwareLoggingLevel:(NSUInteger)arg0 withWindowSize:(NSUInteger)arg1 ;


@end


#endif