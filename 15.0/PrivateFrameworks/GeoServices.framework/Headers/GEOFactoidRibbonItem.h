// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOFACTOIDRIBBONITEM_H
#define GEOFACTOIDRIBBONITEM_H


#import <Foundation/Foundation.h>

#import "GEOPDFactoidRibbonItem.h"

@interface GEOFactoidRibbonItem : NSObject {
    GEOPDFactoidRibbonItem *_factoidItem;
}


@property (readonly, nonatomic) int indexWithinFactoidComponent;


-(id)initWithFactoidRibbonItem:(id)arg0 ;


@end


#endif