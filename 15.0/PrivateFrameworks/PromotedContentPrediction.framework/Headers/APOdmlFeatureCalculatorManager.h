// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLFEATURECALCULATORMANAGER_H
#define APODMLFEATURECALCULATORMANAGER_H

@class NSArray, NSMutableArray, NSOperationQueue;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "APOdmlXpcLifecycleHandler.h"

@interface APOdmlFeatureCalculatorManager : NSObject

@property (retain, nonatomic) NSArray *assetManagerTypes; // ivar: _assetManagerTypes
@property (retain, nonatomic) NSMutableArray *calculatorErrors; // ivar: _calculatorErrors
@property (retain, nonatomic) APOdmlXpcLifecycleHandler *lifeCycleHandler; // ivar: _lifeCycleHandler
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSArray *placementTypes; // ivar: _placementTypes
@property (retain, nonatomic) NSMutableArray *validFeatureCalculators; // ivar: _validFeatureCalculators
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpc_activity; // ivar: _xpc_activity


-(id)initWithActivity:(id)arg0 ;
-(id)lifecycleCheck;
-(id)parseErrorInfo:(id)arg0 calculator:(id)arg1 ;
-(void)calculateAllFeatures:(id)arg0 ;
-(void)iterateThroughCalculators:(id)arg0 ;


@end


#endif