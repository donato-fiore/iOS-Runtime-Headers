// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFFEEDBACKFORMBUILDER_H
#define TFFEEDBACKFORMBUILDER_H


#import <Foundation/Foundation.h>


@interface TFFeedbackFormBuilder : NSObject



-(id)_buildEmailGroupWithPrefilledEmail:(id)arg0 ;
-(id)_buildUserFeedbackGroupWithContext:(NSUInteger)arg0 hasScreenshots:(BOOL)arg1 ;
-(id)_feedbackCommentPlaceholderStringForContext:(NSUInteger)arg0 ;
-(id)buildFormForContext:(NSUInteger)arg0 withPrefilledEmail:(id)arg1 hasScreenshots:(BOOL)arg2 ;


@end


#endif