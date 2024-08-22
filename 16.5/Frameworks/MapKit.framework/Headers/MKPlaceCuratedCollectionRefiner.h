// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACECURATEDCOLLECTIONREFINER_H
#define MKPLACECURATEDCOLLECTIONREFINER_H

@protocol MKMapServiceCuratedCollectionTicket, MKMapServiceCuratedCollectionItemsTicket;

#import <Foundation/Foundation.h>

#import "MKMapItemIdentifier.h"

@interface MKPlaceCuratedCollectionRefiner : NSObject {
    MKMapItemIdentifier *_collectionIdentifier;
    id<MKMapServiceCuratedCollectionTicket> *_identifierRefinementTicket;
    id<MKMapServiceCuratedCollectionItemsTicket> *_mapItemRefinementTicket;
}




-(id)initWithCollectionIdentifier:(NSUInteger)arg0 ;
-(id)initWithCollectionIdentifier:(NSUInteger)arg0 providerIdentifier:(int)arg1 ;
-(void)_resolveMapItemsWithCollection:(id)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
-(void)fetchWithCallbackQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif