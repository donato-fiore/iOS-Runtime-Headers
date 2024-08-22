// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOUNIFIEDACTIONBUTTONMODULECONFIGURATION_H
#define GEOUNIFIEDACTIONBUTTONMODULECONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDUnifiedActionModuleConfiguration.h"

@interface GEOUnifiedActionButtonModuleConfiguration : NSObject {
    GEOPDUnifiedActionModuleConfiguration *_buttonModuleConfig;
}


@property (readonly, nonatomic) NSArray *buttonItems;


-(id)description;
-(id)initWithUnifiedActionModuleConfiguration:(id)arg0 ;


@end


#endif