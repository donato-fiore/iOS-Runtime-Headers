// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLDATASOURCE_H
#define _MLDATASOURCE_H

@class NSDictionary, NSString;
@protocol ETDataProvider;

#import <Foundation/Foundation.h>


@interface _MLDataSource : NSObject <ETDataProvider>



@property (retain, nonatomic) NSDictionary *dataTensorDictionary; // ivar: _dataTensorDictionary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)numberOfDataPoints;
-(id)dataPointAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithMLFeatureProvider:(id)arg0 forPrediction:(BOOL)arg1 neuralNetworkEngine:(id)arg2 error:(*id)arg3 ;


@end


#endif