// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCPSCROLLEVENTSTREAM_H
#define RCPSCROLLEVENTSTREAM_H

@class NSMutableArray, NSString, CAMediaTimingFunction;
@protocol RCPChildEventStream;

#import <Foundation/Foundation.h>

#import "RCPEvent.h"
#import "RCPEventEnvironment.h"
#import "RCPEventSenderProperties.h"

@interface RCPScrollEventStream : NSObject <RCPChildEventStream>

 {
    NSMutableArray *_events;
    unsigned int _scrollOptions;
    RCPEvent *_cachedFirstEvent;
}


@property (nonatomic) CGFloat currentTimeOffset; // ivar: _currentTimeOffset
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat deltaToPixelsScaleFactor; // ivar: _deltaToPixelsScaleFactor
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) RCPEventEnvironment *environment; // ivar: _environment
@property (nonatomic) CGFloat frequency; // ivar: _frequency
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAMediaTimingFunction *pointerCurveFunction; // ivar: _pointerCurveFunction
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties; // ivar: _senderProperties
@property (readonly) Class superclass;


-(id)_eventWithDelta:(struct CGVector )arg0 phase:(unsigned short)arg1 ;
-(id)finalizeEventStream;
-(id)init;
-(void)_updateAmplitudeBy:(struct CGVector )arg0 ;
-(void)advanceByDelta:(struct CGVector )arg0 duration:(CGFloat)arg1 ;
-(void)advanceTime:(CGFloat)arg0 ;


@end


#endif