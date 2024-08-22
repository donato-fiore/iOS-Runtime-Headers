// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIEXTENDEDCORRECTIONCHECKINGRESULT_H
#define UIEXTENDEDCORRECTIONCHECKINGRESULT_H

@class NSCorrectionCheckingResult, NSDictionary;



@interface UIExtendedCorrectionCheckingResult : NSCorrectionCheckingResult {
    _NSRange _sentenceRange;
    NSDictionary *_detail;
}




-(BOOL)isPostEditingResult;
-(id)detail;
-(id)initWithRange:(struct _NSRange )arg0 replacementString:(id)arg1 sentenceRange:(struct _NSRange )arg2 detail:(id)arg3 ;
-(struct _NSRange )sentenceRange;


@end


#endif