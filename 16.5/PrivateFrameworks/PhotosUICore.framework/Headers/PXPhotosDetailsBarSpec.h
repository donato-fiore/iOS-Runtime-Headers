// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDETAILSBARSPEC_H
#define PXPHOTOSDETAILSBARSPEC_H

@class NSDictionary, NSSet;


#import "PXBarSpec.h"

@interface PXPhotosDetailsBarSpec : PXBarSpec {
    NSDictionary *_sortPriorityByBarItemIdentifierByPlacement;
    NSSet *_includedBarItemIdentifiers;
    BOOL _shouldPlaceEditActionsInToolbar;
}


@property (nonatomic) NSUInteger detailsOptions; // ivar: _detailsOptions


-(BOOL)_shouldIncludeItem:(id)arg0 ;
-(id)_placementForBarItem:(id)arg0 ;
-(id)_sortPriorityForBarItem:(id)arg0 placement:(id)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 ;
-(id)sortedBarItemsByPlacement:(id)arg0 ;


@end


#endif