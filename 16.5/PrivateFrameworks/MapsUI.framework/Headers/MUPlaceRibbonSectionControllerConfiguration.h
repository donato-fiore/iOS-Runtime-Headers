// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACERIBBONSECTIONCONTROLLERCONFIGURATION_H
#define MUPLACERIBBONSECTIONCONTROLLERCONFIGURATION_H

@class MKETAProvider, GEOPlaceRibbonConfiguration;

#import <Foundation/Foundation.h>

#import "MUPlaceDataAvailability.h"

@interface MUPlaceRibbonSectionControllerConfiguration : NSObject

@property (retain, nonatomic) MUPlaceDataAvailability *availability; // ivar: _availability
@property (retain, nonatomic) MKETAProvider *etaProvider; // ivar: _etaProvider
@property (retain, nonatomic) GEOPlaceRibbonConfiguration *ribbonConfiguration; // ivar: _ribbonConfiguration




@end


#endif