// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDATTRIBUTE_H
#define CDATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CDAttribute : NSObject

@property (readonly) NSString *fullName; // ivar: _fullName
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSInteger type; // ivar: _type


-(BOOL)associateToBudget:(id)arg0 error:(*id)arg1 ;
-(BOOL)destroyWithError:(*id)arg0 ;
-(BOOL)occurredWithValue:(id)arg0 cost:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)reset:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setCategory:(NSInteger)arg0 error:(*id)arg1 ;
-(id)temporalForecastOfValue:(id)arg0 forHistoryWindow:(id)arg1 forecastType:(NSInteger)arg2 maximumElements:(NSUInteger)arg3 error:(*id)arg4 ;


@end


#endif