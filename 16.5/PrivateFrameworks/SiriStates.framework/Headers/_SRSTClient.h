// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SRSTCLIENT_H
#define _SRSTCLIENT_H

@class NSString;
@protocol _SRSTClientDelegate;

#import <Foundation/Foundation.h>

#import "_SRSTState.h"

@interface _SRSTClient : NSObject {
    ? _currentState;
    ? _mostRecentEvent;
    ? stopped;
}


@property (nonatomic, retain) _SRSTState *currentState;
@property (nonatomic, weak) NSObject<_SRSTClientDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) NSString *mostRecentEventName;


-(id)init;
-(void)dealloc;
-(void)dispatchEvent:(NSInteger)arg0 ;
-(void)stopClient;


@end


#endif