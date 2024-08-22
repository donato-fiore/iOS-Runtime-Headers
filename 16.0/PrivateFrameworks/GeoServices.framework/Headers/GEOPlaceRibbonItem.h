// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPLACERIBBONITEM_H
#define GEOPLACERIBBONITEM_H


#import <Foundation/Foundation.h>

#import "GEOAmenityRibbonItem.h"
#import "GEOFactoidRibbonItem.h"

@interface GEOPlaceRibbonItem : NSObject

@property (readonly, nonatomic) GEOAmenityRibbonItem *amenityItem; // ivar: _amenityItem
@property (readonly, nonatomic) GEOFactoidRibbonItem *factoidItem; // ivar: _factoidItem
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) int type; // ivar: _type


-(id)initAmenityWithAmenityItem:(id)arg0 ;
-(id)initWithFactoidRibbonItem:(id)arg0 ;
-(id)initWithType:(int)arg0 ;


@end


#endif