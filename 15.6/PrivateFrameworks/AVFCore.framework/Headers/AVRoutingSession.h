// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVROUTINGSESSION_H
#define AVROUTINGSESSION_H


#import <Foundation/Foundation.h>

#import "AVRoutingSessionInternal.h"
#import "AVRoutingSessionDestination.h"

@interface AVRoutingSession : NSObject {
    AVRoutingSessionInternal *_ivars;
}


@property (readonly) AVRoutingSessionDestination *destination;
@property (readonly) BOOL establishedAutomaticallyFromLikelyDestination;


-(id)description;
-(id)init;
-(id)initWithFigRoutingSession:(struct OpaqueFigRoutingSession *)arg0 ;
-(void)dealloc;


@end


#endif