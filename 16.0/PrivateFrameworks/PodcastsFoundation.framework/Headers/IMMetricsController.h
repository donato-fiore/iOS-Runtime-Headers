// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMMETRICSCONTROLLER_H
#define IMMETRICSCONTROLLER_H

@class NSString, AMSMetrics;
@protocol IMMetricsControllerProtocol;

#import <Foundation/Foundation.h>


@interface IMMetricsController : NSObject <IMMetricsControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLoading; // ivar: _isLoading
@property (retain, nonatomic) AMSMetrics *metricsController; // ivar: _metricsController
@property (nonatomic) BOOL shouldIgnoreDNU; // ivar: _shouldIgnoreDNU
@property (nonatomic) BOOL shouldSuppressUserInfo; // ivar: _shouldSuppressUserInfo
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *topic; // ivar: _topic


+(id)queue;
-(id)flushImmediately;
-(id)initWithTopic:(id)arg0 ;
-(void)addAdditionalFieldsToEvent:(id)arg0 completion:(id)arg1 ;
-(void)getMetricsController:(id)arg0 ;
-(void)recordEvent:(id)arg0 ;


@end


#endif