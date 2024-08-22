// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDBACKMANAGER_H
#define PXFEEDBACKMANAGER_H


#import <Foundation/Foundation.h>

#import "PXFeedbackCollector.h"
#import "PXFeedbackSender.h"

@interface PXFeedbackManager : NSObject {
    NSUInteger _feedbackCollectionType;
}


@property (readonly, nonatomic) PXFeedbackCollector *feedbackCollector; // ivar: _feedbackCollector
@property (readonly, nonatomic) PXFeedbackSender *feedbackSender; // ivar: _feedbackSender


+(id)sharedManager;
-(id)init;
-(id)provideUserFeedbackFromDictionary:(id)arg0 forFeedbackType:(NSUInteger)arg1 ;
-(void)provideUserFeedbackEntry:(id)arg0 ;
-(void)removeFeedbackEntry:(id)arg0 ;


@end


#endif