// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNIVERSALSEARCHSESSION_H
#define UNIVERSALSEARCHSESSION_H

@class WBSParsecDSession, WBSParsecDFeedbackDispatcher;



@interface UniversalSearchSession : WBSParsecDSession

@property (readonly, nonatomic) WBSParsecDFeedbackDispatcher *feedbackDispatcher;


+(BOOL)shouldUseSearchFoundation;
+(id)sharedSession;
-(void)session:(id)arg0 bag:(id)arg1 didLoadWithError:(id)arg2 ;


@end


#endif