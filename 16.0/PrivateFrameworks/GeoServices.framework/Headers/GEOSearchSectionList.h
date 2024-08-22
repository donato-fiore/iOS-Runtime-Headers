// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSEARCHSECTIONLIST_H
#define GEOSEARCHSECTIONLIST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEOSearchSectionList : NSObject

@property (readonly, nonatomic) NSArray *geoMapItemIdentifiers; // ivar: _geoMapItemIdentifiers
@property (readonly, nonatomic) NSArray *searchSections; // ivar: _searchSections


+(id)identifiersWithSearchSections:(id)arg0 ;
-(NSUInteger)indexOfItemWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithSearchSectionList:(id)arg0 mapsResults:(id)arg1 ;
-(id)initWithSearchSections:(id)arg0 ;


@end


#endif