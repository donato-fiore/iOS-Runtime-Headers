// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORELATEDENTITYSECTION_H
#define GEORELATEDENTITYSECTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "GEORelatedCollectionSection.h"

@interface GEORelatedEntitySection : NSObject

@property (readonly, nonatomic) unsigned int index; // ivar: _index
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) GEORelatedCollectionSection *relatedCollectionSection; // ivar: _relatedCollectionSection
@property (readonly, nonatomic) NSArray *relatedPlaceCollections; // ivar: _relatedPlaceCollections
@property (readonly, nonatomic) NSInteger sectionType; // ivar: _sectionType


-(id)init;
-(id)initWithRelatedEntitySection:(id)arg0 mapsResults:(id)arg1 ;
-(id)placeCollectionsWithCollectionSection:(id)arg0 ;


@end


#endif