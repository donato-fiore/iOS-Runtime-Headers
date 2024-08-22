// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EVALUATIONDATASOURCEESPRESSOWRAPPER_H
#define EVALUATIONDATASOURCEESPRESSOWRAPPER_H

@protocol ETDataSource, EvaluatorDataSource;

#import <Foundation/Foundation.h>


@interface EvaluationDataSourceEspressoWrapper : NSObject <ETDataSource>



@property (retain, nonatomic) NSObject<EvaluatorDataSource> *dataSource; // ivar: _dataSource


-(id)dataPointAtIndex:(int)arg0 ;
-(id)dataProcessAtIndex:(int)arg0 ;
-(id)featureProviderAtIndex:(int)arg0 ;
-(id)initWithEvaluatorDataSource:(id)arg0 ;
-(int)numberOfDataPoints;


@end


#endif