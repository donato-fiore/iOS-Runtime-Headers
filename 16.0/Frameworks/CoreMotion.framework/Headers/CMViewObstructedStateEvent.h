// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMVIEWOBSTRUCTEDSTATEEVENT_H
#define CMVIEWOBSTRUCTEDSTATEEVENT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CMViewObstructedStateEvent : NSObject

@property (nonatomic) unsigned char currentState; // ivar: _currentState
@property (nonatomic) float lux; // ivar: _lux
@property (retain, nonatomic) NSArray *meanProbabilities; // ivar: _meanProbabilities
@property (copy, nonatomic) NSString *motionType; // ivar: _motionType
@property (copy, nonatomic) NSString *orientation; // ivar: _orientation
@property (nonatomic) float pocketProbability; // ivar: _pocketProbability
@property (nonatomic) BOOL shouldSuppress; // ivar: _shouldSuppress


-(id)description;
-(id)initWithShouldSupress:(BOOL)arg0 currentState:(unsigned char)arg1 orientation:(id)arg2 motionType:(id)arg3 lux:(float)arg4 pocketProbability:(float)arg5 meanProbabilitiesFloatArray:(id)arg6 ;
-(void)dealloc;


@end


#endif