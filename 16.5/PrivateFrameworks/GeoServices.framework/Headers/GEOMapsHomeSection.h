// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPSHOMESECTION_H
#define GEOMAPSHOMESECTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOCollectionSuggestionResult.h"

@interface GEOMapsHomeSection : NSObject

@property (readonly, nonatomic) GEOCollectionSuggestionResult *collectionSuggestionResult; // ivar: _collectionSuggestionResult
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger sectionType; // ivar: _sectionType


-(id)initWithMapsHomeSection:(id)arg0 mapsResults:(id)arg1 ;


@end


#endif