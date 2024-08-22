// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TILANGUAGEMODELOFFLINELEARNINGSTRATEGYRESPONSEKIT_H
#define TILANGUAGEMODELOFFLINELEARNINGSTRATEGYRESPONSEKIT_H

@class NSMutableDictionary, NSURL, RKMessageResponseManager, NSString;
@protocol TILanguageModelOfflineLearningStrategy;

#import <Foundation/Foundation.h>

#import "TILanguageModelOfflineLearningTask.h"

@interface TILanguageModelOfflineLearningStrategyResponseKit : NSObject <TILanguageModelOfflineLearningStrategy>

 {
    NSMutableDictionary *_recipientModels;
    NSURL *_directory;
    RKMessageResponseManager *_trainer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) TILanguageModelOfflineLearningTask *learningTask; // ivar: _learningTask
@property (readonly) Class superclass;


-(BOOL)learnMessages:(id)arg0 withRecipientRecords:(id)arg1 ;
-(id)filterMessages:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 andDirectory:(id)arg1 ;
-(id)messagesClusteredByRecipient:(id)arg0 ;
-(void)didFinishLearning;


@end


#endif