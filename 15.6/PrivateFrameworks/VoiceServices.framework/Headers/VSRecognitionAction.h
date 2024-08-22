// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSRECOGNITIONACTION_H
#define VSRECOGNITIONACTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VSRecognitionSession.h"

@interface VSRecognitionAction : NSObject {
    NSString *_resultString;
    NSString *_statusString;
    NSString""attributedStringValue"@"NSAttributedString" _spokenString;
    VSRecognitionSession *_session;
    BOOL _spokenStringIsAttributed;
}




-(BOOL)_hasDeferredStartCallback;
-(BOOL)sensitiveActionsEnabled;
-(id)_session;
-(id)cancel;
-(id)perform;
-(id)resultDisplayString;
-(id)spokenFeedbackAttributedString;
-(id)spokenFeedbackString;
-(id)statusDisplayString;
-(int)completionType;
-(void)_continueAfterDeferredStart;
-(void)_setSession:(id)arg0 ;
-(void)completeWithNextAction:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)setResultDisplayString:(id)arg0 ;
-(void)setSpokenFeedbackAttributedString:(id)arg0 ;
-(void)setSpokenFeedbackString:(id)arg0 ;
-(void)setStatusDisplayString:(id)arg0 ;


@end


#endif