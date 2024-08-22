// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASESESSIONVOLUME_H
#define PHASESESSIONVOLUME_H


#import <Foundation/Foundation.h>


@interface PHASESessionVolume : NSObject

@property (readonly, nonatomic) NSInteger unit; // ivar: _unit
@property (readonly, nonatomic) float value; // ivar: _value


-(id)description;
-(id)initWithValue:(float)arg0 unit:(NSInteger)arg1 ;


@end


#endif