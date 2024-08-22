// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _KSREQUESTTHROTTLE_H
#define _KSREQUESTTHROTTLE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _KSRequestThrottle : NSObject {
    id *_curveFunction;
    CGFloat _maximum;
    id *_request;
    int _retryCount;
}


@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
// -(id)initWithCurve:(id)arg0 maximumDelay:(unk)arg1  ;
-(void)_launch;
-(void)postRequest:(id)arg0 ;


@end


#endif