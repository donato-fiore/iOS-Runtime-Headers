// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORELATEDPLACEMODULECONFIGURATION_H
#define GEORELATEDPLACEMODULECONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDTemplatePlaceModuleConfiguration.h"

@interface GEORelatedPlaceModuleConfiguration : NSObject {
    GEOPDTemplatePlaceModuleConfiguration *_relatedPlaceConfig;
}


@property (readonly, nonatomic) int componentIdentifier;
@property (readonly, nonatomic) int layoutVariant;
@property (readonly, nonatomic) NSUInteger numberOfRows;
@property (readonly, nonatomic) NSString *sectionTitle;
@property (readonly, nonatomic, getter=isVertical) BOOL vertical;


-(id)description;
-(id)initWithPlaceTemplateModuleConfiguration:(id)arg0 ;


@end


#endif