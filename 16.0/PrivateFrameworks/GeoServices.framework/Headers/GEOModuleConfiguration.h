// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMODULECONFIGURATION_H
#define GEOMODULECONFIGURATION_H


#import <Foundation/Foundation.h>

#import "GEOPDModuleConfiguration.h"
#import "GEOButtonModuleConfiguration.h"
#import "GEOBusinessInfoModuleConfiguration.h"
#import "GEOHeaderButtonModuleConfiguration.h"
#import "GEOPlaceDetailsModuleConfiguration.h"
#import "GEOPlaceRibbonConfiguration.h"
#import "GEORelatedPlaceModuleConfiguration.h"
#import "GEOUnifiedActionButtonModuleConfiguration.h"
#import "GEOWebContentModuleConfiguration.h"

@interface GEOModuleConfiguration : NSObject {
    GEOPDModuleConfiguration *_moduleConfig;
}


@property (readonly, nonatomic) GEOButtonModuleConfiguration *actionButtonConfig;
@property (readonly, nonatomic) GEOBusinessInfoModuleConfiguration *businessInfoConfig;
@property (readonly, nonatomic) GEOHeaderButtonModuleConfiguration *headerButtonConfig;
@property (readonly, nonatomic) GEOPlaceDetailsModuleConfiguration *placeDetailsConfig;
@property (readonly, nonatomic) GEOPlaceRibbonConfiguration *placeRibbonConfig;
@property (readonly, nonatomic) GEORelatedPlaceModuleConfiguration *relatedPlaceConfig;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) GEOUnifiedActionButtonModuleConfiguration *unifiedActionConfig;
@property (readonly, nonatomic) GEOWebContentModuleConfiguration *webContentConfig;


+(id)moduleConfigurationForURL:(id)arg0 ;
-(id)description;
-(id)initWithModuleConfiguration:(id)arg0 ;
-(void)_logNoModuleConfigMatchForType;


@end


#endif