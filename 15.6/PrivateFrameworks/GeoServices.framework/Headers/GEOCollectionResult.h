// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOLLECTIONRESULT_H
#define GEOCOLLECTIONRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDCollectionResult.h"
#import "GEOPDComponent.h"
#import "GEOPlaceCollection.h"

@interface GEOCollectionResult : NSObject {
    GEOPDCollectionResult *_collectionResult;
    GEOPDComponent *_collectionComponent;
    GEOPlaceCollection *_collection;
}


@property (readonly, nonatomic) GEOPlaceCollection *collection;
@property (readonly, nonatomic) NSArray *placeCollectionItems;


+(id)collectionResultsFromResponse:(id)arg0 ;
-(id)initWithCollectionResult:(id)arg0 ;


@end


#endif