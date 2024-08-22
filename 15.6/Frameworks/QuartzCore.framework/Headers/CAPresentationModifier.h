// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAPRESENTATIONMODIFIER_H
#define CAPRESENTATIONMODIFIER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CAPresentationModifierGroup.h"

@interface CAPresentationModifier : NSObject {
    *void _impl;
    id *_keyPath;
    id *_value;
    id *_velocity;
    id *_group;
    int _l;
    unsigned int _f;
}


@property (readonly) BOOL additive;
@property (getter=isEnabled) BOOL enabled;
@property (readonly) CAPresentationModifierGroup *group;
@property (readonly, copy) NSString *keyPath;
@property (retain) id *value;


-(id)debugDescription;
-(id)init;
-(id)initWithKeyPath:(id)arg0 initialValue:(id)arg1 additive:(BOOL)arg2 ;
-(id)initWithKeyPath:(id)arg0 initialValue:(id)arg1 additive:(BOOL)arg2 group:(id)arg3 ;
-(id)initWithKeyPath:(id)arg0 initialValue:(id)arg1 initialVelocity:(id)arg2 additive:(BOOL)arg3 preferredFrameRateRangeMaximum:(int)arg4 group:(id)arg5 ;
-(struct Object *)CA_copyRenderValue;
-(void)dealloc;
-(void)write;


@end


#endif