// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHENVIRONMENTTRANSITIONSTATETARGET_H
#define BLSHENVIRONMENTTRANSITIONSTATETARGET_H

@class NSDate, BLSBacklightSceneVisualState;

#import <Foundation/Foundation.h>


@interface BLSHEnvironmentTransitionStateTarget : NSObject {
    os_unfair_lock_s _lock;
    BOOL _lock_performedBacklightRamp;
}


@property NSInteger backlightState; // ivar: _backlightState
@property BOOL didCompleteAnimation; // ivar: _didCompleteAnimation
@property BOOL didUpdateInitialState; // ivar: _didUpdateInitialState
@property (readonly, nonatomic) NSDate *presentationDate; // ivar: _presentationDate
@property (readonly, nonatomic) NSUInteger sequenceID; // ivar: _sequenceID
@property (readonly, nonatomic) BLSBacklightSceneVisualState *visualState; // ivar: _visualState


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToVisualState:(id)arg0 presentationDate:(id)arg1 ;
-(BOOL)setAndTestDidPerformBacklightRamp;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)initWithSequenceID:(NSUInteger)arg0 backlightState:(NSInteger)arg1 ;
-(id)initWithSequenceID:(NSUInteger)arg0 backlightState:(NSInteger)arg1 visualState:(id)arg2 presentationDate:(id)arg3 ;
-(id)initWithTarget:(id)arg0 visualState:(id)arg1 presentationDate:(id)arg2 ;


@end


#endif