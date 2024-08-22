// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMODULE_H
#define GEOMODULE_H

@protocol GEOModuleConfigurationProvider;

#import <Foundation/Foundation.h>

#import "GEOPDModule.h"
#import "GEOModuleConfiguration.h"

@interface GEOModule : NSObject {
    GEOPDModule *_module;
    id<GEOModuleConfigurationProvider> *_moduleConfigProvider;
}


@property (readonly, nonatomic) GEOModuleConfiguration *configuration;
@property (readonly, nonatomic) int configurationExpectation;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (readonly, nonatomic) BOOL isExpectedToHaveConfiguration;
@property (readonly, nonatomic) int type;


-(id)description;
-(id)initWithModule:(id)arg0 moduleConfigProvider:(id)arg1 ;


@end


#endif