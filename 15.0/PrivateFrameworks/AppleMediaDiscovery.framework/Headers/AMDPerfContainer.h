// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDPERFCONTAINER_H
#define AMDPERFCONTAINER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AMDPerfContainer : NSObject

@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) char level; // ivar: _level
@property (retain, nonatomic) NSMutableDictionary *memoryUsage; // ivar: _memoryUsage
@property (retain, nonatomic) NSMutableDictionary *samples; // ivar: _samples
@property (nonatomic) CGFloat timeConversionFactor; // ivar: _timeConversionFactor
@property (retain, nonatomic) NSMutableDictionary *timeUsage; // ivar: _timeUsage


+(float)getMemoryUsage:(id)arg0 logType:(id)arg1 timeDelta:(CGFloat)arg2 ;
-(CGFloat)getTime;
-(id)initWithSwitch:(BOOL)arg0 atLevel:(char)arg1 ;


@end


#endif