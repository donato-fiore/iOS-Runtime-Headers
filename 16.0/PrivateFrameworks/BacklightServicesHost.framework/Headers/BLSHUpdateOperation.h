// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHUPDATEOPERATION_H
#define BLSHUPDATEOPERATION_H



#import "BLSHEnvironmentOperation.h"

@interface BLSHUpdateOperation : BLSHEnvironmentOperation

@property (readonly, nonatomic) NSInteger backlightState; // ivar: _backlightState


-(id)description;
-(id)initWithBacklightState:(NSInteger)arg0 ;


@end


#endif