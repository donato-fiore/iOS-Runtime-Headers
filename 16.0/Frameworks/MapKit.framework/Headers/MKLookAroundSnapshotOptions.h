// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKLOOKAROUNDSNAPSHOTOPTIONS_H
#define MKLOOKAROUNDSNAPSHOTOPTIONS_H

@class UITraitCollection;

#import <Foundation/Foundation.h>

#import "MKMapSnapshotOptions.h"
#import "MKPointOfInterestFilter.h"

@interface MKLookAroundSnapshotOptions : NSObject

@property (retain, nonatomic, getter=_options, setter=_setOptions:) MKMapSnapshotOptions *options; // ivar: _options
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) CGSize size;
@property (copy, nonatomic) UITraitCollection *traitCollection;


-(id)init;


@end


#endif