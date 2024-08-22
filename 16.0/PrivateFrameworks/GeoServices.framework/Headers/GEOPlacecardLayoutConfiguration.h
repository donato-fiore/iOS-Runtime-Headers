// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPLACECARDLAYOUTCONFIGURATION_H
#define GEOPLACECARDLAYOUTCONFIGURATION_H

@protocol GEOModuleConfigurationProvider;

#import <Foundation/Foundation.h>

#import "GEOPDPlacecardLayoutConfiguration.h"
#import "GEOModuleLayoutEntry.h"

@interface GEOPlacecardLayoutConfiguration : NSObject {
    GEOPDPlacecardLayoutConfiguration *_placecardLayoutConfiguration;
    id<GEOModuleConfigurationProvider> *_moduleConfigProvider;
}


@property (readonly, nonatomic) GEOModuleLayoutEntry *currentModuleLayoutEntry;


-(id)initWithPlacecardLayoutConfiguration:(id)arg0 moduleConfigurationProvider:(id)arg1 ;


@end


#endif