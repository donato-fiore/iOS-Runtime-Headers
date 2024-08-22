// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPITEMCONTAINEDPLACE_H
#define GEOMAPITEMCONTAINEDPLACE_H

@class NSArray;
@protocol GEOMapItem;

#import <Foundation/Foundation.h>

#import "GEOPDContainedPlace.h"

@interface GEOMapItemContainedPlace : NSObject {
    GEOPDContainedPlace *_containedPlace;
    id<GEOMapItem> *_parent;
    NSArray *_children;
    NSArray *_siblings;
}


@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSUInteger featureId;
@property (readonly, nonatomic) NSObject<GEOMapItem> *parent;
@property (readonly, nonatomic) NSUInteger parentFeatureId;
@property (readonly, nonatomic) NSArray *siblings;


-(id)description;
-(id)init;
-(id)initWithContainedPlace:(id)arg0 ;


@end


#endif