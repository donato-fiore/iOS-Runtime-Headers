// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPOSTSIRIENGAGEMENTEVENTSIGNALDELTAEVENT_H
#define BMPOSTSIRIENGAGEMENTEVENTSIGNALDELTAEVENT_H

@class NSString;
@protocol BMStoreData;


#import "BMEventBase.h"

@interface BMPostSiriEngagementEventSignalDeltaEvent : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration; // ivar: _hasDuration
@property (nonatomic) BOOL hasSinceUIEnd; // ivar: _hasSinceUIEnd
@property (nonatomic) BOOL hasSinceUIStart; // ivar: _hasSinceUIStart
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat sinceUIEnd; // ivar: _sinceUIEnd
@property (readonly, nonatomic) CGFloat sinceUIStart; // ivar: _sinceUIStart
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithDuration:(CGFloat)arg0 sinceUIEnd:(CGFloat)arg1 sinceUIStart:(CGFloat)arg2 ;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif