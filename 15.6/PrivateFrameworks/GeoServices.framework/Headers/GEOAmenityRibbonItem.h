// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOAMENITYRIBBONITEM_H
#define GEOAMENITYRIBBONITEM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDAmenityRibbonItem.h"

@interface GEOAmenityRibbonItem : NSObject {
    GEOPDAmenityRibbonItem *_amenityItem;
}


@property (readonly, nonatomic) NSArray *indexesWithinAmenityComponent;


-(id)initWithRibbonItem:(id)arg0 ;


@end


#endif