// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHCOACHINGDIAGNOSTICDATA_H
#define CHCOACHINGDIAGNOSTICDATA_H

@class HKCategorySample, NSArray;

#import <Foundation/Foundation.h>


@interface CHCoachingDiagnosticData : NSObject

@property (retain, nonatomic) HKCategorySample *coachingEventSample; // ivar: _coachingEventSample
@property (readonly, nonatomic) NSArray *items; // ivar: _items


-(id)init;
-(id)itemForInterval:(NSUInteger)arg0 future:(BOOL)arg1 ;


@end


#endif