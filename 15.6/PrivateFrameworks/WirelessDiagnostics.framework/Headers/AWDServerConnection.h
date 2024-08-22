// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDSERVERCONNECTION_H
#define AWDSERVERCONNECTION_H


#import <Foundation/Foundation.h>


@interface AWDServerConnection : NSObject {
    *void fServerConnection;
}




-(BOOL)registerConfigChangeCallback:(id)arg0 ;
-(BOOL)registerQueriableMetric:(unsigned int)arg0 callback:(id)arg1 ;
// -(BOOL)registerQueriableMetricCallback:(id)arg0 forIdentifier:(unk)arg1  ;
-(BOOL)submitMetric:(id)arg0 ;
-(NSUInteger)getAWDTimestamp;
-(id)getComponentConfigurationParameters;
-(id)initWithComponentId:(unsigned int)arg0 ;
-(id)initWithComponentId:(unsigned int)arg0 andBlockOnConfiguration:(BOOL)arg1 ;
-(id)newMetricContainerWithIdentifier:(unsigned int)arg0 ;
-(void)dealloc;
-(void)flushToQueue:(struct dispatch_queue_s *)arg0 block:(id)arg1 ;
-(void)registerComponentParametersChangeCallback:(id)arg0 ;


@end


#endif