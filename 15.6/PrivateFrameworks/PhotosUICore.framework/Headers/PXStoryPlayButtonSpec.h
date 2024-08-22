// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYPLAYBUTTONSPEC_H
#define PXSTORYPLAYBUTTONSPEC_H


#import <Foundation/Foundation.h>

#import "PXStoryChromeButtonSpec.h"
#import "PXExtendedTraitCollection.h"

@interface PXStoryPlayButtonSpec : NSObject

@property (readonly, nonatomic) PXStoryChromeButtonSpec *chromeButtonSpec; // ivar: _chromeButtonSpec
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) CGFloat playButtonProgressIndicatorLineWidth; // ivar: _playButtonProgressIndicatorLineWidth


-(id)initWithChromeButtonSpec:(id)arg0 ;


@end


#endif