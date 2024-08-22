// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITAPTICENGINE_H
#define _UITAPTICENGINE_H


#import <Foundation/Foundation.h>

#import "_UIStatesFeedbackGenerator.h"

@interface _UITapticEngine : NSObject

@property (nonatomic) BOOL feedbackActivated; // ivar: _feedbackActivated
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator


-(id)_stateForFeedback:(NSInteger)arg0 ;
-(id)init;
-(void)actuateFeedback:(NSInteger)arg0 ;
-(void)endUsingFeedback:(NSInteger)arg0 ;
-(void)prepareUsingFeedback:(NSInteger)arg0 ;


@end


#endif