// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFUNITVARIABLEAGGRANDIZEMENT_H
#define WFUNITVARIABLEAGGRANDIZEMENT_H

@class NSUnit, NSString;


#import "WFVariableAggrandizement.h"

@interface WFUnitVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) NSUnit *unit; // ivar: _unit
@property (readonly, nonatomic) NSString *unitType;


-(id)availableUnits;
-(id)initWithUnit:(id)arg0 unitType:(id)arg1 ;
-(id)processedContentClasses:(id)arg0 ;
-(void)applyToContentCollection:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif