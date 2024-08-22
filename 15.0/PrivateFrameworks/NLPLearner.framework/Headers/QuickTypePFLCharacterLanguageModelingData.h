// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QUICKTYPEPFLCHARACTERLANGUAGEMODELINGDATA_H
#define QUICKTYPEPFLCHARACTERLANGUAGEMODELINGDATA_H

@class NSLocale, CVNLPTokenIDConverter;


#import "QuickTypePFLLanguageModelingData.h"

@interface QuickTypePFLCharacterLanguageModelingData : QuickTypePFLLanguageModelingData {
    NSLocale *_locale;
    CVNLPTokenIDConverter *_tokenConverter;
}




+(NSUInteger)defaultMaxSequenceLength;
+(void)initialize;
-(BOOL)loadFromCoreDuet:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(void)addResource:(id)arg0 ;


@end


#endif