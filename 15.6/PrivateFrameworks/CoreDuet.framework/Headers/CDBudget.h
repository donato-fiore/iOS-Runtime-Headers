// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDBUDGET_H
#define CDBUDGET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CDBudget : NSObject

@property (readonly) NSUInteger integerId; // ivar: _integerId
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSInteger type; // ivar: _type


-(BOOL)compareValueTo:(NSInteger)arg0 swapOnMatchWithValue:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)decrementByValue:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)deleteWithError:(*id)arg0 ;
-(BOOL)incrementByValue:(NSInteger)arg0 error:(*id)arg1 ;
-(NSInteger)creditsRemainingWithError:(*id)arg0 ;
-(id)childBudgetWithName:(id)arg0 maxFraction:(CGFloat)arg1 type:(NSInteger)arg2 error:(*id)arg3 ;
-(id)childBudgetWithName:(id)arg0 maxFraction:(CGFloat)arg1 type:(NSInteger)arg2 withOptions:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)forecastEffectiveOnDate:(id)arg0 error:(*id)arg1 ;
-(id)initWithSession:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 integerId:(NSUInteger)arg3 error:(*id)arg4 ;


@end


#endif