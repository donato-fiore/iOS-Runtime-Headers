// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATSTATUSOBSERVER_H
#define ATSTATUSOBSERVER_H

@class NSXPCConnection, NSString;
@protocol ATStatusObserverProtocol, ATStatusObserverDelegate;

#import <Foundation/Foundation.h>


@interface ATStatusObserver : NSObject <ATStatusObserverProtocol>



@property (nonatomic) BOOL ATCRunning; // ivar: _ATCRunning
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATStatusObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (nonatomic) BOOL resumed; // ivar: _resumed
@property (readonly) Class superclass;


-(id)init;
-(void)fetchAllStatusWithCompletion:(id)arg0 ;
-(void)resume;
-(void)suspend;
-(void)updateWithStatus:(id)arg0 ;


@end


#endif