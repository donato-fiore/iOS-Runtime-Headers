// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDATATABLECONDITIONENGINE_H
#define SXDATATABLECONDITIONENGINE_H


#import <Foundation/Foundation.h>


@interface SXDataTableConditionEngine : NSObject

@property (nonatomic) NSUInteger conditionCount; // ivar: _conditionCount
@property (nonatomic) NSUInteger validConditionCount; // ivar: _validConditionCount


+(id)engine;
-(BOOL)isValid;
-(NSUInteger)isEvenInteger:(NSInteger)arg0 ;
-(NSUInteger)isOddInteger:(NSInteger)arg0 ;
-(id)description;
-(void)addConditionForEqualInteger:(NSUInteger)arg0 withInteger:(NSUInteger)arg1 ;
-(void)addConditionForEqualString:(id)arg0 withString:(id)arg1 ;
-(void)addConditionForEvenBoolean:(NSUInteger)arg0 withInteger:(NSUInteger)arg1 ;
-(void)addConditionForOddBoolean:(NSUInteger)arg0 withInteger:(NSUInteger)arg1 ;


@end


#endif