// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SRSTCALLCLIENT_H
#define _SRSTCALLCLIENT_H

@class NSString;
@protocol _SRSTCallClientDelegate;

#import <Foundation/Foundation.h>

#import "_SRSTCallState.h"

@interface _SRSTCallClient : NSObject {
    ? _currentState;
    ? _mostRecentEvent;
    ? stopped;
}


@property (nonatomic, retain) _SRSTCallState *currentState;
@property (nonatomic, weak) NSObject<_SRSTCallClientDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) NSString *mostRecentEventName;


-(id)init;
-(void)dealloc;
-(void)dispatchEvent:(NSInteger)arg0 ;
-(void)stopClient;


@end


#endif