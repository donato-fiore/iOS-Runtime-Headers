// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXJSONDATATABLESELECTOR_H
#define SXJSONDATATABLESELECTOR_H

@class NSString;
@protocol SXDataTableSelector;


#import "SXJSONObject.h"

@interface SXJSONDataTableSelector : SXJSONObject <SXDataTableSelector>



@property (readonly, nonatomic) NSUInteger columnIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptor;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfConditions; // ivar: _numberOfConditions
@property (readonly, nonatomic) NSUInteger rowIndex;
@property (nonatomic) NSUInteger selectorWeight; // ivar: _selectorWeight
@property (readonly) Class superclass;


-(NSUInteger)evenColumnsWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)evenRowsWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)oddColumnsWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)oddRowsWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)selectorBooleanForValue:(id)arg0 ;
-(NSUInteger)weightForSelectorKey:(id)arg0 ;
-(id)initWithJSONData:(id)arg0 andVersion:(id)arg1 ;
-(id)initWithJSONObject:(id)arg0 andVersion:(id)arg1 ;
-(id)propertyList;
-(void)commonInit;


@end


#endif