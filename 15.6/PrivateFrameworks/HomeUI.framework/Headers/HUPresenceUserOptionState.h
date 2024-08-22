// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPRESENCEUSEROPTIONSTATE_H
#define HUPRESENCEUSEROPTIONSTATE_H


#import <Foundation/Foundation.h>


@interface HUPresenceUserOptionState : NSObject

@property (readonly, nonatomic) NSUInteger activationGranularity; // ivar: _activationGranularity
@property (readonly, nonatomic, getter=isLocationAvailable) BOOL locationAvailable; // ivar: _locationAvailable
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(id)init;
-(id)initWithActivationGranularity:(NSUInteger)arg0 selected:(BOOL)arg1 locationAvailable:(BOOL)arg2 ;


@end


#endif