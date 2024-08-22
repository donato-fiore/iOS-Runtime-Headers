// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPLACETEMPLATE_H
#define GEOPLACETEMPLATE_H

@class NSTimeZone, NSMapTable, NSString;
@protocol GEOMapItemPhoto;

#import <Foundation/Foundation.h>

#import "GEOPDTemplateData.h"
#import "GEOPlaceLineTemplate.h"
#import "GEOMapItemIdentifier.h"
#import "GEOFeatureStyleAttributes.h"

@interface GEOPlaceTemplate : NSObject {
    GEOPDTemplateData *_templateData;
    NSTimeZone *_timeZone;
    NSMapTable *_attributionMap;
}


@property (readonly, nonatomic) GEOPlaceLineTemplate *footerLine;
@property (readonly, nonatomic) BOOL hasRichData; // ivar: _hasRichData
@property (readonly, nonatomic) NSObject<GEOMapItemPhoto> *heroImage;
@property (readonly, nonatomic) GEOMapItemIdentifier *mapItemIdentifier;
@property (readonly, nonatomic) NSString *placeName;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) GEOPlaceLineTemplate *subtitleLine;
@property (readonly, nonatomic) BOOL supportsAreaHighlight;


-(id)initWithIdentifier:(id)arg0 supportsAreaHighlight:(BOOL)arg1 ;
-(id)initWithPlaceTemplate:(id)arg0 attributionMap:(id)arg1 ;


@end


#endif