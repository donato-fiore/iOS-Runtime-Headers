// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOBUTTONMODULECONFIGURATION_H
#define GEOBUTTONMODULECONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDButtonModuleConfiguration.h"

@interface GEOButtonModuleConfiguration : NSObject {
    GEOPDButtonModuleConfiguration *_buttonModuleConfig;
}


@property (readonly, nonatomic) NSArray *buttonItems;


-(id)description;
-(id)initWithButtonModuleConfiguration:(id)arg0 ;


@end


#endif