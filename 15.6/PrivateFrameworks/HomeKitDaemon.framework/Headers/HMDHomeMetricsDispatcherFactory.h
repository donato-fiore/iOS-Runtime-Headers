// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEMETRICSDISPATCHERFACTORY_H
#define HMDHOMEMETRICSDISPATCHERFACTORY_H

@class HMFObject, NSString;
@protocol HMDHomeMetricsDispatcherFactory;



@interface HMDHomeMetricsDispatcherFactory : HMFObject <HMDHomeMetricsDispatcherFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createHomeMetricsDispatcherWithIdentifier:(id)arg0 logEventSubmitter:(id)arg1 ;


@end


#endif