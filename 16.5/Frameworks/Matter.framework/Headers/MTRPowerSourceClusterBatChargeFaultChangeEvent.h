// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRPOWERSOURCECLUSTERBATCHARGEFAULTCHANGEEVENT_H
#define MTRPOWERSOURCECLUSTERBATCHARGEFAULTCHANGEEVENT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRPowerSourceClusterBatChargeFaultChangeEvent : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *current; // ivar: _current
@property (copy, nonatomic) NSArray *previous; // ivar: _previous


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif