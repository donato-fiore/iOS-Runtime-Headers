// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPEEXENDPOINTER_H
#define SPEEXENDPOINTER_H

@class NSString;
@protocol Endpointer;

#import <Foundation/Foundation.h>


@interface SpeexEndpointer : NSObject <Endpointer>

 {
    CGFloat mStartWaitTime;
    CGFloat mInterspeechWaitTime;
    CGFloat mEndWaitTime;
    int mEndpointMode;
    unsigned int mFrameRate;
    int mLastStatus;
    *void _impl;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat endWaitTime;
@property int endpointMode;
@property (readonly) NSUInteger hash;
@property CGFloat interspeechWaitTime;
@property CGFloat startWaitTime;
@property (readonly) Class superclass;


-(BOOL)configureWithASBD:(struct AudioStreamBasicDescription *)arg0 andFrameRate:(unsigned int)arg1 ;
-(BOOL)configureWithSampleRate:(CGFloat)arg0 andFrameRate:(unsigned int)arg1 ;
-(id)init;
-(int)getStatus:(*float)arg0 count:(unsigned int)arg1 ;
-(int)getStatus:(struct AudioQueueBuffer *)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif