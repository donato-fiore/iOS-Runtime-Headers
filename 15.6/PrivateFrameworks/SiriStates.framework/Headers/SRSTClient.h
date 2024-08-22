// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRSTCLIENT_H
#define SRSTCLIENT_H

@class NSString;
@protocol SRSTClientDelegate;

#import <Foundation/Foundation.h>

#import "SRSTState.h"

@interface SRSTClient : NSObject {
    ? _currentState;
    ? _mostRecentEvent;
}


@property (nonatomic, retain) SRSTState *currentState;
@property (nonatomic, weak) NSObject<SRSTClientDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) NSString *mostRecentEventName;


-(id)init;
-(void)dealloc;
-(void)dispatchEvent:(NSInteger)arg0 ;


@end


#endif