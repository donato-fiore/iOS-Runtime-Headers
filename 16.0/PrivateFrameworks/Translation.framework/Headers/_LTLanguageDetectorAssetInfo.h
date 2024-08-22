// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTLANGUAGEDETECTORASSETINFO_H
#define _LTLANGUAGEDETECTORASSETINFO_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface _LTLanguageDetectorAssetInfo : NSObject {
    NSURL *_assetUrl;
    NSURL *_featureCombinationConfigUrl;
}




-(id)featureCombinationConfigUrl;
-(id)initWithAssetUrl:(id)arg0 featureCombinationAssetUrl:(id)arg1 ;
-(id)languageDetectorModelURL;


@end


#endif