// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGNAMEDETECTOR_H
#define SGNAMEDETECTOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SGTokenizerMappingTransformer.h"
#import "SGNameMappingTransformer.h"

@interface SGNameDetector : NSObject {
    SGTokenizerMappingTransformer *_noCoreNLPTokenizer;
    SGTokenizerMappingTransformer *_coreNLPTokenizer;
    NSString *_language;
    SGNameMappingTransformer *_transformer;
}




+(id)_contactNames;
+(id)_fetchContactNamesToLimit:(NSUInteger)arg0 ;
+(id)_fetchContactNamesToLimit:(NSUInteger)arg0 peopleSuggester:(id)arg1 ;
-(id)_detectContactNames:(id)arg0 ;
-(id)_detectNLPNames:(id)arg0 ;
-(id)_detectNames:(id)arg0 withNameSet:(id)arg1 ;
-(id)detectNames:(id)arg0 algorithm:(NSUInteger)arg1 ;
-(id)detectNames:(id)arg0 withNameSet:(id)arg1 ;
-(id)initWithLanguage:(id)arg0 ;
-(id)tokenizerWithCoreNLPEnabled:(BOOL)arg0 ;


@end


#endif