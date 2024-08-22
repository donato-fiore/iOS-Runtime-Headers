// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOHEADERBUTTONMODULECONFIGURATION_H
#define GEOHEADERBUTTONMODULECONFIGURATION_H


#import <Foundation/Foundation.h>

#import "GEOPDHeaderButtonsConfiguration.h"

@interface GEOHeaderButtonModuleConfiguration : NSObject {
    GEOPDHeaderButtonsConfiguration *_headerButtonsConfiguration;
}


@property (readonly, nonatomic, getter=shouldSuppressDirections) BOOL suppressDirections;


-(id)initWithHeaderButtonConfiguration:(id)arg0 ;


@end


#endif