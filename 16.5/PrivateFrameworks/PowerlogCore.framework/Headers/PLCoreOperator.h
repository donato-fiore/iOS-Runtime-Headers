// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCOREOPERATOR_H
#define PLCOREOPERATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLCoreOperator : NSObject

@property (retain) NSMutableDictionary *operators; // ivar: _operators


+(id)registeredOperators;
+(id)registeredOperatorsOfSuperClassType:(Class)arg0 ;
+(void)registerOperator:(Class)arg0 ;
-(id)allOperators;
-(id)init;
-(id)tablesToTrimConditionsForTrimDate:(id)arg0 ;
-(void)dealloc;
-(void)initOperatorDependancies;
-(void)initOperatorDependanciesWithBlock:(id)arg0 ;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)setupEntryObjectsAndStorage:(id)arg0 ;
-(void)startOperatorsOfSuperClassType:(Class)arg0 ;
-(void)startServicesForPreUnlockTelemetry;


@end


#endif