// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLANGUAGERECOGNITIONSESSION_H
#define CRLANGUAGERECOGNITIONSESSION_H

@class NLLanguageRecognizer;
@protocol CRTextDecodingLanguageRecognitionSession;

#import <Foundation/Foundation.h>

#import "CRLanguageRecognitionContext.h"

@interface CRLanguageRecognitionSession : NSObject <CRTextDecodingLanguageRecognitionSession>



@property (retain) NLLanguageRecognizer *languageRecognizer; // ivar: _languageRecognizer
@property (retain) CRLanguageRecognitionContext *latinLanguageRecognitionContext; // ivar: _latinLanguageRecognitionContext


-(id)init;
-(void)completeSession;
-(void)processFeature:(id)arg0 context:(id)arg1 ;


@end


#endif