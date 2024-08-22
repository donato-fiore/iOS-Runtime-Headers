// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUICLIENTMESSENGER_H
#define AXUICLIENTMESSENGER_H

@class NSString, AXMultiplexConnectionHandler;

#import <Foundation/Foundation.h>


@interface AXUIClientMessenger : NSObject

@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) AXMultiplexConnectionHandler *connection; // ivar: _connection


+(id)clientMessengerWithIdentifier:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithClientIdentifier:(id)arg0 connection:(id)arg1 ;
-(id)sendSynchronousMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)sendAsynchronousMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 targetAccessQueue:(id)arg2 completion:(id)arg3 ;
-(void)sendAsynchronousMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 targetAccessQueue:(id)arg2 completionRequiresWritingBlock:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif