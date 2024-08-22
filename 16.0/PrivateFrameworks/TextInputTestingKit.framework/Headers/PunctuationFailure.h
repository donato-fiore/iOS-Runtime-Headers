// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUNCTUATIONFAILURE_H
#define PUNCTUATIONFAILURE_H

@class NSCharacterSet;
@protocol AutocorrectionResultClassifier;

#import <Foundation/Foundation.h>


@interface PunctuationFailure : NSObject <AutocorrectionResultClassifier>

 {
    NSCharacterSet *_punctuation;
}




-(BOOL)doesMatchResult:(id)arg0 ;
-(id)init;


@end


#endif