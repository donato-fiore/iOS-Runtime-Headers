// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTROUTINEMANAGEREXPORTEDOBJECT_H
#define RTROUTINEMANAGEREXPORTEDOBJECT_H

@class NSString;
@protocol RTFrameworkProtocol;

#import <Foundation/Foundation.h>

#import "RTRoutineManager.h"

@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) RTRoutineManager *routineManager; // ivar: _routineManager
@property (readonly) Class superclass;


-(id)initWithRoutineManager:(id)arg0 ;
-(void)onLeechedLowConfidenceVisit:(id)arg0 withError:(id)arg1 ;
-(void)onLeechedVisit:(id)arg0 withError:(id)arg1 ;
-(void)onScenarioTrigger:(id)arg0 withError:(id)arg1 ;
-(void)onVehicleEvents:(id)arg0 error:(id)arg1 ;
-(void)onVisit:(id)arg0 withError:(id)arg1 ;


@end


#endif