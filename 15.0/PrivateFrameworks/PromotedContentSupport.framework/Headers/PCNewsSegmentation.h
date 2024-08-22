// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCNEWSSEGMENTATION_H
#define PCNEWSSEGMENTATION_H


#import <Foundation/Foundation.h>


@interface PCNewsSegmentation : NSObject



+(id)_classProperties;
+(id)ageGroup;
+(id)gender;
+(id)segmentData;
+(void)_updateGenderAndAgeGroupValues;
+(void)addClientToSegments:(id)arg0 replaceExisting:(BOOL)arg1 privateSegment:(BOOL)arg2 ;


@end


#endif