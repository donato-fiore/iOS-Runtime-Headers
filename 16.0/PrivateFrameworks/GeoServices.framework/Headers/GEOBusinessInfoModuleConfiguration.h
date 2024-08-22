// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOBUSINESSINFOMODULECONFIGURATION_H
#define GEOBUSINESSINFOMODULECONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDBusinessInfosModuleConfiguration.h"

@interface GEOBusinessInfoModuleConfiguration : NSObject {
    GEOPDBusinessInfosModuleConfiguration *_businessInfosModuleConfig;
}


@property (readonly, nonatomic) NSArray *factoidItemIndexes;


-(id)initWithBusinessInfoModuleConfiguration:(id)arg0 ;


@end


#endif