// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTSOURCECOREROUTINELEARNEDLOCATION_H
#define RTSOURCECOREROUTINELEARNEDLOCATION_H

@class NSUUID;


#import "RTSourceCoreRoutine.h"

@interface RTSourceCoreRoutineLearnedLocation : RTSourceCoreRoutine

@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif