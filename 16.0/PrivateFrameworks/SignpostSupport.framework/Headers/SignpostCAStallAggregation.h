// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTCASTALLAGGREGATION_H
#define SIGNPOSTCASTALLAGGREGATION_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SignpostCAProcessStallAggregation.h"

@interface SignpostCAStallAggregation : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *executablePathToStallAggregation; // ivar: _executablePathToStallAggregation
@property (readonly, nonatomic) SignpostCAProcessStallAggregation *systemAggregation; // ivar: _systemAggregation


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)_addDuration:(NSUInteger)arg0 ofType:(unsigned char)arg1 procExecutablePath:(id)arg2 responsiblePID:(int)arg3 aggregateForSystem:(BOOL)arg4 ;
-(void)_addSystemDuration:(NSUInteger)arg0 ofType:(unsigned char)arg1 ;


@end


#endif