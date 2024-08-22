// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRMULTILOCALETEXTRECOGNIZER_H
#define CRMULTILOCALETEXTRECOGNIZER_H

@class NSMutableDictionary;


#import "CRMultiModelTextRecognizer.h"

@interface CRMultiLocaleTextRecognizer : CRMultiModelTextRecognizer

@property (retain) NSMutableDictionary *textRecognizers; // ivar: _textRecognizers


-(id)decodingStats;
-(id)identifierForTextFeature:(id)arg0 ;
-(id)inferenceStats;
-(id)initWithImageReaderOptions:(id)arg0 error:(*id)arg1 ;
-(id)recognizerForIdentifier:(id)arg0 ;
-(void)cancel;


@end


#endif