// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CESRFORMATTER_H
#define CESRFORMATTER_H

@class _EARFormatter;

#import <Foundation/Foundation.h>

#import "CESRAssetConfig.h"

@interface CESRFormatter : NSObject {
    _EARFormatter *_formatter;
    CESRAssetConfig *_assetConfig;
}




-(id)formatSpeechTokensWithAutoPunctuation:(id)arg0 ;
-(id)initWithAssetConfig:(id)arg0 ;


@end


#endif