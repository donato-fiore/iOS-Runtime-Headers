// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTLOCALIZATIONCONFIGURATION_H
#define CHIPTESTLOCALIZATIONCONFIGURATION_H



#import "CHIPLocalizationConfiguration.h"

@interface CHIPTestLocalizationConfiguration : CHIPLocalizationConfiguration {
    LocalizationConfigurationClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSupportedLocalesWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif