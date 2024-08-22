// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEBATCHABLECOMPACTCOLLECTION_H
#define MKPLACEBATCHABLECOMPACTCOLLECTION_H


#import <Foundation/Foundation.h>

#import "MKMapItemIdentifier.h"
#import "MKPlaceCompactCollectionViewModel.h"

@interface MKPlaceBatchableCompactCollection : NSObject

@property (readonly, nonatomic) MKMapItemIdentifier *guideLocationIdentifier; // ivar: _guideLocationIdentifier
@property (retain, nonatomic) MKPlaceCompactCollectionViewModel *viewModel; // ivar: _viewModel


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithWorldwideViewModel:(id)arg0 ;


@end


#endif