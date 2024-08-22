// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10CHRONOCORE31CLIENTCONFIGURATIONMODELSERVICE_H
#define _TTC10CHRONOCORE31CLIENTCONFIGURATIONMODELSERVICE_H

@class SwiftObject;



@interface _TtC10ChronoCore31ClientConfigurationModelService : SwiftObject {
    ? _configurationsPublisher;
    ? _metricsSpecificationPublisher;
    ? _configuredWidgetContainerDescriptorsPublisher;
    ? _orphanedConfigurationsPublisher;
    ? _locked_configurations;
    ? _configuredWidgetMetadataCache;
    ? _lock;
    ? _locked_orphanedIdentifiersToExpirationTime;
    ? _locked_orphanedConfigurationsPurgeTimer;
    ? _locked_orphanPurgeTime;
    ? _orphanedLeeway;
}






@end


#endif