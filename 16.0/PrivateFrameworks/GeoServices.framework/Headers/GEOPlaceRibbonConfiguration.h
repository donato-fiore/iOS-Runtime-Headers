// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPLACERIBBONCONFIGURATION_H
#define GEOPLACERIBBONCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDPlaceRibbonConfiguration.h"

@interface GEOPlaceRibbonConfiguration : NSObject {
    GEOPDPlaceRibbonConfiguration *_ribbonConfig;
}


@property (readonly, nonatomic) NSArray *ribbonItems; // ivar: _ribbonItems


-(id)initWithRibbonConfiguration:(id)arg0 ;
-(void)_addAmenityEntryForRibbonItem:(id)arg0 toArray:(id)arg1 ;
-(void)_addFactoidEntriesForRibbonItem:(id)arg0 toArray:(id)arg1 ;
-(void)_addRegularRibbonEntryForType:(int)arg0 toArray:(id)arg1 ;
-(void)_buildRibbonItems;


@end


#endif