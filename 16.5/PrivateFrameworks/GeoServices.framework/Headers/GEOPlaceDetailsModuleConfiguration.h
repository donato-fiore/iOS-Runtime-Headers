// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPLACEDETAILSMODULECONFIGURATION_H
#define GEOPLACEDETAILSMODULECONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDPlaceInfosModuleConfiguration.h"

@interface GEOPlaceDetailsModuleConfiguration : NSObject {
    GEOPDPlaceInfosModuleConfiguration *_placeInfosModuleConfig;
}


@property (readonly, nonatomic) int attributionStyle;
@property (readonly, nonatomic) NSArray *factoidReferences;
@property (readonly, nonatomic) int locationStyle;


-(id)initWithPlaceInfoModuleConfiguration:(id)arg0 ;


@end


#endif