// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOGUIDELOCATION_H
#define GEOGUIDELOCATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDGuidesLocationEntry.h"
#import "GEOPDGuidesLocationEntryTypeWorldWide.h"
#import "GEOPDEntity.h"
#import "GEOPDGuideGroup.h"
#import "GEOMapItemIdentifier.h"

@interface GEOGuideLocation : NSObject {
    GEOPDGuidesLocationEntry *_guideLocation;
    GEOPDGuidesLocationEntryTypeWorldWide *_worldwideGuideLocation;
    GEOPDEntity *_placeEntity;
    GEOPDGuideGroup *_guideGroup;
}


@property (readonly, nonatomic) NSString *country; // ivar: _country
@property (readonly, nonatomic) GEOMapItemIdentifier *guideLocationIdentifier;
@property (readonly, nonatomic) NSUInteger numberOfGuides;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSInteger type;


+(id)guideLocationsForEntries:(id)arg0 mapsResults:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithChildAction:(id)arg0 ;
-(id)initWithGuideLocation:(id)arg0 ;
-(id)initWithGuideLocation:(id)arg0 mapsResult:(id)arg1 ;
-(id)initWithWorldwideGuideLocation:(id)arg0 ;
-(id)pdLocationEntry;
-(id)pdWorldwideLocationEntry;
-(id)photosForType:(NSInteger)arg0 ;


@end


#endif