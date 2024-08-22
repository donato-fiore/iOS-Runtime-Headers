// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRICORENETWORKACTIVITY_H
#define SIRICORENETWORKACTIVITY_H

@class NSMutableSet;
@protocol OS_nw_activity;

#import <Foundation/Foundation.h>


@interface SiriCoreNetworkActivity : NSObject {
    NSObject<OS_nw_activity> *_activity;
    NSInteger _state;
    NSInteger _parentLabel;
    NSMutableSet *_connections;
    BOOL _hasStarted;
}




-(BOOL)hasStarted;
-(NSInteger)parentLabel;
-(id)initWithLabel:(NSInteger)arg0 parent:(id)arg1 ;
-(id)nwActivity;
-(id)nwActivityToken;
-(int)_completionReasonToNWActivityCompletionReason:(NSInteger)arg0 ;
-(void)_networkActivityAbort;
-(void)_networkActivityRestart;
-(void)_networkActivityState:(NSInteger)arg0 ;
-(void)activate;
-(void)addConnection:(id)arg0 ;
-(void)removeConnection:(id)arg0 ;
-(void)setHasStarted:(BOOL)arg0 ;
-(void)stopWithCompletionReason:(NSInteger)arg0 andError:(id)arg1 ;


@end


#endif