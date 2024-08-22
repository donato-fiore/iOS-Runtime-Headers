// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCREATEASMCLASSOPERATION_H
#define CRKCREATEASMCLASSOPERATION_H

@class CATOperation;
@protocol CRKClassKitRosterRequirements;


#import "CRKASMCourseCreateProperties.h"

@interface CRKCreateASMClassOperation : CATOperation

@property (readonly, copy, nonatomic) CRKASMCourseCreateProperties *properties; // ivar: _properties
@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements; // ivar: _requirements


-(BOOL)applyProperties:(id)arg0 toClass:(id)arg1 error:(*id)arg2 ;
-(BOOL)isAsynchronous;
-(BOOL)location:(id)arg0 hasMatchInLocations:(id)arg1 ;
-(id)initWithProperties:(id)arg0 requirements:(id)arg1 ;
-(void)constructClassWithInstructor:(id)arg0 ;
-(void)fetchInstructor;
-(void)main;
-(void)validateDesiredLocationExistsForInstructor:(id)arg0 ;
-(void)validateParameters;


@end


#endif