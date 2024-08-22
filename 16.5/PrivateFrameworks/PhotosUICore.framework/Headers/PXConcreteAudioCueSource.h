// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONCRETEAUDIOCUESOURCE_H
#define PXCONCRETEAUDIOCUESOURCE_H

@class NSString;
@protocol PXAudioCueSource;

#import <Foundation/Foundation.h>


@interface PXConcreteAudioCueSource : NSObject <PXAudioCueSource>



@property (readonly, nonatomic) ? cueTimeRange;
@property (readonly, nonatomic) *? cues; // ivar: _cues
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSInteger numberOfCues; // ivar: _numberOfCues
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? timeRange; // ivar: _timeRange


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_indexOfFirstCueFollowingTime:(struct ? )arg0 ;
-(NSInteger)_indexOfFirstCueInRange:(struct ? )arg0 ;
-(NSInteger)firstCueIndex;
-(id)diagnosticStringForTimeRange:(struct ? )arg0 indicatorTime:(struct ? )arg1 rangeIndicatorTimeRange:(struct ? )arg2 stringLength:(NSInteger)arg3 ;
-(id)init;
-(id)initWithNumberOfCues:(NSInteger)arg0 configuration:(id)arg1 ;
-(struct ? )bestCueInRange:(struct ? )arg0 preferredTime:(struct ? )arg1 ;
-(struct ? )firstCueFollowingTime:(struct ? )arg0 ;
-(void)dealloc;
-(void)enumerateCuesInRange:(struct ? )arg0 withBlock:(id)arg1 ;


@end


#endif