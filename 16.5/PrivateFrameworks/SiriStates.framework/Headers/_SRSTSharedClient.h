// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SRSTSHAREDCLIENT_H
#define _SRSTSHAREDCLIENT_H

@class NSString;
@protocol _SRSTSharedClientDelegate;

#import <Foundation/Foundation.h>

#import "_SRSTSharedState.h"

@interface _SRSTSharedClient : NSObject {
    ? _currentState;
    ? _mostRecentEvent;
    ? stopped;
}


@property (nonatomic, retain) _SRSTSharedState *currentState;
@property (nonatomic, weak) NSObject<_SRSTSharedClientDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) NSString *mostRecentEventName;


-(id)init;
-(void)dealloc;
-(void)dispatchEvent:(NSInteger)arg0 ;
-(void)stopClient;


@end


#endif