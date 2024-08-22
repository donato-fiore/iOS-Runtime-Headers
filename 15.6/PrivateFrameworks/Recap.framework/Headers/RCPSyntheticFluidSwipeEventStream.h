// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCPSYNTHETICFLUIDSWIPEEVENTSTREAM_H
#define RCPSYNTHETICFLUIDSWIPEEVENTSTREAM_H

@class NSMutableArray, NSString;
@protocol RCPChildEventStream, RCPProgressEventStreamComposer;

#import <Foundation/Foundation.h>

#import "RCPEventEnvironment.h"
#import "RCPEventSenderProperties.h"

@interface RCPSyntheticFluidSwipeEventStream : NSObject <RCPChildEventStream, RCPProgressEventStreamComposer>

 {
    NSMutableArray *_processingEventBuffer;
    unsigned int _eventType;
    unsigned short _flavor;
    unsigned short _motion;
    BOOL _hasCreatedFirstEvent;
}


@property (nonatomic) CGFloat currentTimeOffset; // ivar: _currentTimeOffset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) RCPEventEnvironment *environment; // ivar: _environment
@property (nonatomic) CGFloat frequency; // ivar: _frequency
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties; // ivar: _senderProperties
@property (readonly) Class superclass;


-(NSUInteger)_currentMachTime;
-(id)finalizeEventStream;
-(id)initWithEventType:(unsigned int)arg0 flavor:(unsigned short)arg1 motion:(unsigned short)arg2 ;
-(void)addToBuffer:(struct __IOHIDEvent *)arg0 ;
-(void)advanceProgressByDelta:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)advanceTime:(CGFloat)arg0 ;
-(void)updateProgressTo:(CGFloat)arg0 ;
-(void)updateProgressTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;


@end


#endif