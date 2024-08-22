// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIWORKOUTLAPLENGTHINDEXTRANSLATOR_H
#define FIUIWORKOUTLAPLENGTHINDEXTRANSLATOR_H

@class HKUnit;

#import <Foundation/Foundation.h>


@interface FIUIWorkoutLapLengthIndexTranslator : NSObject

@property (retain, nonatomic) HKUnit *distanceUnit; // ivar: _distanceUnit


-(CGFloat)valueForIndex:(NSInteger)arg0 ;
-(CGFloat)valueTranslatedFromDistanceUnit:(CGFloat)arg0 ;
-(CGFloat)valueTranslatedIntoDistanceUnit:(CGFloat)arg0 ;
-(NSInteger)indexForValue:(CGFloat)arg0 ;
-(id)initWithDistanceUnit:(id)arg0 ;


@end


#endif