// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCPPOINTERTRACKINGCHILDEVENTSTREAM_H
#define RCPPOINTERTRACKINGCHILDEVENTSTREAM_H

@class NSMutableArray, NSString;
@protocol RCPChildEventStream;

#import <Foundation/Foundation.h>

#import "RCPEventEnvironment.h"
#import "RCPEventSenderProperties.h"

@interface RCPPointerTrackingChildEventStream : NSObject <RCPChildEventStream>

 {
    NSMutableArray *_processingEventBuffer;
}


@property (nonatomic) CGPoint currentPointerLocation; // ivar: _currentPointerLocation
@property (nonatomic) CGFloat currentTimeOffset; // ivar: _currentTimeOffset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) RCPEventEnvironment *environment; // ivar: _environment
@property (nonatomic) CGFloat frequency; // ivar: _frequency
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties; // ivar: _senderProperties
@property (readonly) Class superclass;


-(NSUInteger)_currentMachTime;
-(id)finalizeEventStream;
-(id)initWithCurrentPointerLocation:(struct CGPoint )arg0 ;
-(struct CGPoint )orientedDestinationPoint:(struct CGPoint )arg0 ;
-(struct CGVector )_deltaToPoint:(struct CGPoint )arg0 ;
-(void)_addIOHIDEventToProcessingBuffer:(struct __IOHIDEvent *)arg0 ;
-(void)advanceTime:(CGFloat)arg0 ;
-(void)moveByDelta:(struct CGVector )arg0 duration:(CGFloat)arg1 ;
-(void)movePointerByDelta:(struct CGVector )arg0 ;
-(void)moveToPoint:(struct CGPoint )arg0 duration:(CGFloat)arg1 ;


@end


#endif