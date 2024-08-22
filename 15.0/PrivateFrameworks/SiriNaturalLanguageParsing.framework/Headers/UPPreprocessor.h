// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPPREPROCESSOR_H
#define UPPREPROCESSOR_H

@class NSLocale;

#import <Foundation/Foundation.h>

#import "UPTokenizer.h"

@interface UPPreprocessor : NSObject {
    *AbstractFeaturizer __featurizer;
}


@property (readonly) BOOL isPLUMEnabled; // ivar: _isPLUMEnabled
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) UPTokenizer *tokenizer; // ivar: _tokenizer


-(id)initWithLocale:(id)arg0 tokenizer:(id)arg1 isPLUMEnabled:(BOOL)arg2 featurizer:(struct AbstractFeaturizer *)arg3 ;
-(id)preprocess:(id)arg0 error:(*id)arg1 ;


@end


#endif