// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINFOSUGGESTIONFEEDBACKCLIENT_H
#define ATXINFOSUGGESTIONFEEDBACKCLIENT_H

@class _PASXPCClientHelper;

#import <Foundation/Foundation.h>


@interface ATXInfoSuggestionFeedbackClient : NSObject {
    _PASXPCClientHelper *_xpcClientHelper;
}




+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)stackDidRotateProactivelyForInfoSuggestion:(id)arg0 isStalenessRotation:(BOOL)arg1 ;
-(void)suggestionDismissed:(id)arg0 isDismissalLongTerm:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif