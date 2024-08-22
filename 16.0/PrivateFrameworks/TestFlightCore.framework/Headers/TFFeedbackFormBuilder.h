// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFFEEDBACKFORMBUILDER_H
#define TFFEEDBACKFORMBUILDER_H


#import <Foundation/Foundation.h>


@interface TFFeedbackFormBuilder : NSObject



-(id)_buildEmailGroupWithDeveloperName:(id)arg0 prefilledEmail:(id)arg1 ;
-(id)_buildUserFeedbackGroupWithContext:(NSUInteger)arg0 hasScreenshots:(BOOL)arg1 ;
-(id)_feedbackCommentPlaceholderStringForContext:(NSUInteger)arg0 ;
-(id)buildFormForContext:(NSUInteger)arg0 withDeveloperName:(id)arg1 prefilledEmail:(id)arg2 hasScreenshots:(BOOL)arg3 ;


@end


#endif