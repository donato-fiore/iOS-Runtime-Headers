// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSOCIALHIGHLIGHTPROPERTYVALUEPROVIDER_H
#define PPSOCIALHIGHLIGHTPROPERTYVALUEPROVIDER_H

@protocol PPSocialHighlightFeatureProvider;

#import <Foundation/Foundation.h>


@interface PPSocialHighlightPropertyValueProvider : NSObject <PPSocialHighlightFeatureProvider>

 {
    id *_providingBlock;
}




-(id)valueForHighlight:(id)arg0 ;


@end


#endif