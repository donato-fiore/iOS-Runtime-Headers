// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSEARCHATTRIBUTIONLOADER_H
#define GEOSEARCHATTRIBUTIONLOADER_H


#import <Foundation/Foundation.h>

#import "GEOSearchAttributionManifest.h"

@interface GEOSearchAttributionLoader : NSObject {
    GEOSearchAttributionManifest *_attributionManifest;
}




-(id)initWithAttributionManifest:(id)arg0 ;
-(void)loadAttributionInfoForIdentifier:(id)arg0 allowNetwork:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif