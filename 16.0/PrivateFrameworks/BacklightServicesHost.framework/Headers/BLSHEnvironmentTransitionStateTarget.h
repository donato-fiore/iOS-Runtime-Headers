// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHENVIRONMENTTRANSITIONSTATETARGET_H
#define BLSHENVIRONMENTTRANSITIONSTATETARGET_H

@class BLSBacklightSceneVisualState;

#import <Foundation/Foundation.h>


@interface BLSHEnvironmentTransitionStateTarget : NSObject

@property (readonly, nonatomic) NSInteger backlightState; // ivar: _backlightState
@property (readonly, nonatomic) BLSBacklightSceneVisualState *visualState; // ivar: _visualState


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBacklightState:(NSInteger)arg0 visualState:(id)arg1 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)initWithBacklightState:(NSInteger)arg0 visualState:(id)arg1 ;


@end


#endif