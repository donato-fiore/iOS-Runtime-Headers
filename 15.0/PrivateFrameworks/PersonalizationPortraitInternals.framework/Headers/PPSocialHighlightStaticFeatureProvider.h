// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSOCIALHIGHLIGHTSTATICFEATUREPROVIDER_H
#define PPSOCIALHIGHLIGHTSTATICFEATUREPROVIDER_H

@class NSDictionary;
@protocol PPSocialHighlightFeatureProvider;

#import <Foundation/Foundation.h>


@interface PPSocialHighlightStaticFeatureProvider : NSObject <PPSocialHighlightFeatureProvider>

 {
    NSDictionary *_computedFeatures;
    id *_keyBlock;
}




-(id)valueForHighlight:(id)arg0 ;


@end


#endif