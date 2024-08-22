// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2COAPIOTHREADSESSIONQUEUEENTRY_H
#define HAP2COAPIOTHREADSESSIONQUEUEENTRY_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface HAP2CoAPIOThreadSessionQueueEntry : NSObject {
    ? _session;
}


@property ? session;
@property (readonly, nonatomic) NSDate *startTime; // ivar: _startTime


-(?)initWithSessionstartTime;
-(BOOL)reapSession:(id)arg0 ;


@end


#endif