// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOWEBCONTENTMODULECONFIGURATION_H
#define GEOWEBCONTENTMODULECONFIGURATION_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "GEOPDWebModuleConfiguration.h"

@interface GEOWebContentModuleConfiguration : NSObject {
    GEOPDWebModuleConfiguration *_webModuleConfig;
}


@property (readonly, nonatomic, getter=shouldDrawPlatter) BOOL drawPlatter;
@property (readonly, nonatomic) NSURL *url;


-(id)description;
-(id)initWithWebModuleConfiguration:(id)arg0 ;


@end


#endif