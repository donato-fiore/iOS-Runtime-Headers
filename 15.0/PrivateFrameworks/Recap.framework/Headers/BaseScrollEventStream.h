// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BASESCROLLEVENTSTREAM_H
#define BASESCROLLEVENTSTREAM_H

@class NSMutableArray, NSString, NSArray;
@protocol RCPChildEventStream;

#import <Foundation/Foundation.h>

#import "RCPEventEnvironment.h"
#import "RCPEventSenderProperties.h"

@interface BaseScrollEventStream : NSObject <RCPChildEventStream>

 {
    NSMutableArray *_processingEventBuffer;
    BOOL _hasCreatedBeginEvent;
}


@property (nonatomic) CGFloat currentTimeOffset; // ivar: _currentTimeOffset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) RCPEventEnvironment *environment; // ivar: _environment
@property (nonatomic) CGFloat frequency; // ivar: _frequency
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSArray *processingEventBuffer;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties; // ivar: _senderProperties
@property (readonly) Class superclass;


-(NSUInteger)_currentMachTime;
-(id)init;
-(struct __IOHIDEvent *)eventToScrollBy:(struct CGVector )arg0 ;
-(void)addToBuffer:(struct __IOHIDEvent *)arg0 ;
-(void)advanceByDelta:(struct CGVector )arg0 duration:(CGFloat)arg1 ;
-(void)advanceTime:(CGFloat)arg0 ;
-(void)didAppendFinalEvent:(struct __IOHIDEvent *)arg0 ;
-(void)updateAmplitudeBy:(struct CGVector )arg0 ;
-(void)willAppendInitialEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif