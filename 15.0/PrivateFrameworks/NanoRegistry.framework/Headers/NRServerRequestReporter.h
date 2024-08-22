// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRSERVERREQUESTREPORTER_H
#define NRSERVERREQUESTREPORTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NRServerRequestReporter : NSObject {
    BOOL _submitted;
    NSString *_requestType;
    mach_timebase_info _timebaseInfo;
    CGFloat _startTime;
}




-(CGFloat)abs_to_seconds:(NSUInteger)arg0 ;
-(NSUInteger)abs_to_nanos:(NSUInteger)arg0 ;
-(id)initWithRequestType:(id)arg0 ;
-(void)dealloc;
-(void)requestCompletedWithErrorCode:(unsigned int)arg0 ;
-(void)requestCompletedWithErrorCode:(unsigned int)arg0 andDuration:(CGFloat)arg1 ;
-(void)requestTimedOut;


@end


#endif