// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROBRAILLEDISPLAYCOMMANDDISPATCHER_H
#define SCROBRAILLEDISPLAYCOMMANDDISPATCHER_H

@class NSDictionary, NSString;
@protocol SCROBrailleDisplayCommandDispatcherProtocol, SCROBrailleDisplayCommandDispatcherDelegate;

#import <Foundation/Foundation.h>


@interface SCROBrailleDisplayCommandDispatcher : NSObject <SCROBrailleDisplayCommandDispatcherProtocol>

 {
    NSDictionary *_commandDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SCROBrailleDisplayCommandDispatcherDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleBrailleKeyEvent:(id)arg0 ;
-(id)init;
-(void)_handleDeleteEvent:(id)arg0 ;
-(void)_handleEscapeEvent:(id)arg0 ;
-(void)_handleForwardDeleteEvent:(id)arg0 ;
-(void)_handleMoveLeftEvent:(id)arg0 ;
-(void)_handleMoveRightEvent:(id)arg0 ;
-(void)_handlePanLeftEvent:(id)arg0 ;
-(void)_handlePanRightEvent:(id)arg0 ;
-(void)_handleReturnEvent:(id)arg0 ;
-(void)_handleRouterEvent:(id)arg0 ;
-(void)_handleToggleContractedBrailleEvent:(id)arg0 ;
-(void)_handleToggleEightDotBrailleEvent:(id)arg0 ;
-(void)_handleTranslateEvent:(id)arg0 ;
-(void)_handleUnsupportedEvent:(id)arg0 ;


@end


#endif