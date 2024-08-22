// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BITRATELIMITS_H
#define BITRATELIMITS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BitrateLimits : NSObject {
    NSUInteger defaultValue;
    NSUInteger defaultValueCellular;
    NSUInteger defaultValue2G;
}


@property (readonly, nonatomic) NSArray *limits; // ivar: limits


+(NSUInteger)insertionIndex:(id)arg0 forValue:(id)arg1 ;
-(NSUInteger)defaultValueForNetwork:(BOOL)arg0 ;
-(id)initWithOperatingMode:(int)arg0 withBitrateCap:(NSUInteger)arg1 useCaseWatchContinuity:(BOOL)arg2 ;
-(void)capDefaultValues:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif