// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAENROLLMENT_H
#define PAENROLLMENT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PAConfiguration.h"

@interface PAEnrollment : NSObject

@property (retain, nonatomic) PAConfiguration *audiogramPreset; // ivar: _audiogramPreset
@property (retain, nonatomic) NSMutableDictionary *enrollmentHandlers; // ivar: _enrollmentHandlers
@property (nonatomic) NSUInteger progress; // ivar: _progress
@property (nonatomic) NSUInteger selectedLevel; // ivar: _selectedLevel


+(id)enrollmentWithAudiogram:(id)arg0 ;
-(id)enrollmentNodeAfter:(id)arg0 withSelectedNode:(id)arg1 ;
-(id)init;
-(void)addEnrollmentStepForSection:(NSUInteger)arg0 comparing:(NSUInteger)arg1 withOption:(NSUInteger)arg2 andBlock:(id)arg3 ;
-(void)addHandlers;
-(void)addLevelEnrollmentStepsStartingWith:(NSUInteger)arg0 ;
-(void)addOffEnrollmentStepComparing:(NSUInteger)arg0 ;


@end


#endif