// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONTEXTSHAREDEXTRACTIONHELPER_H
#define CKCONTEXTSHAREDEXTRACTIONHELPER_H


#import <Foundation/Foundation.h>


@interface CKContextSharedExtractionHelper : NSObject



+(BOOL)_isRelevantForExtractionWithView:(id)arg0 ;
+(BOOL)textBlockLooksLikeAListWithText:(id)arg0 ;
+(id)bestContentStringForWebViewUIElements:(id)arg0 andTitle:(id)arg1 ;
+(id)bestImageForView:(id)arg0 ;
+(id)blocksFromText:(id)arg0 ;
+(id)webPageNodeExtractionJavaScript;
+(void)descendantsRelevantForContentExtractionFromView:(id)arg0 intoArray:(id)arg1 ;


@end


#endif