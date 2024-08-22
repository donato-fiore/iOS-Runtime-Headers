// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTGPUCOUNTER_H
#define DTGPUCOUNTER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface DTGPUCounter : NSObject

@property (retain, nonatomic) NSString *counterDescription; // ivar: _counterDescription
@property (retain, nonatomic) NSString *functionName; // ivar: _functionName
@property (nonatomic) unsigned int groupIndex; // ivar: _groupIndex
@property (nonatomic) NSUInteger maxValue; // ivar: _maxValue
@property (nonatomic) unsigned int multiplier; // ivar: _multiplier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *rawCounters; // ivar: _rawCounters
@property (readonly, nonatomic) BOOL requiresWeightAccumulation; // ivar: _requiresWeightAccumulation
@property (retain, nonatomic) NSString *type; // ivar: _type


-(id)infoArray;
-(id)initWithName:(id)arg0 maxValue:(NSUInteger)arg1 ;


@end


#endif