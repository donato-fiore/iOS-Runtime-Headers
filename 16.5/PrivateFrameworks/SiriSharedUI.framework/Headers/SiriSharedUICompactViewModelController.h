// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUICOMPACTVIEWMODELCONTROLLER_H
#define SIRISHAREDUICOMPACTVIEWMODELCONTROLLER_H

@class AFConversation, NSMutableArray;
@protocol SiriSharedUICompactViewModelControllerDelegate, SiriSharedUICompactViewModelChangeObserving;

#import <Foundation/Foundation.h>

#import "SiriSharedUICompactViewModel.h"

@interface SiriSharedUICompactViewModelController : NSObject

@property (readonly, nonatomic) BOOL alwaysShowRecognizedSpeech;
@property (readonly, nonatomic) AFConversation *conversation; // ivar: _conversation
@property (weak, nonatomic) NSObject<SiriSharedUICompactViewModelControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL immersiveExperienceOn; // ivar: _immersiveExperienceOn
@property (readonly, nonatomic) NSInteger inputType;
@property (readonly, nonatomic) NSMutableArray *serverUtteranceConversationIds; // ivar: _serverUtteranceConversationIds
@property (copy, nonatomic) SiriSharedUICompactViewModel *viewModel; // ivar: _viewModel
@property (weak, nonatomic) NSObject<SiriSharedUICompactViewModelChangeObserving> *viewModelChangeObserver; // ivar: _viewModelChangeObserver


-(NSUInteger)_generateDiffFromViewModel:(id)arg0 toViewModel:(id)arg1 ;
-(id)_instrumentationManager;
-(id)_serverUtterancesToDisplay;
-(id)_userUtteranceForConversationItem:(id)arg0 ;
-(id)initWithConversation:(id)arg0 delegate:(id)arg1 ;
-(void)_notifyObserverOfViewModelChangeWithDiff:(NSUInteger)arg0 ;
-(void)_processInitialConversationItems;
-(void)_processInsertedConversationItems:(id)arg0 ;
-(void)_processUpdatedConversationItemsAtIndexPaths:(id)arg0 ;
-(void)conversationDidChangeWithTransaction:(id)arg0 ;
-(void)resetViewsAndClearASR:(BOOL)arg0 ;
-(void)revealUserUtterance:(id)arg0 backingAceObject:(id)arg1 ;


@end


#endif