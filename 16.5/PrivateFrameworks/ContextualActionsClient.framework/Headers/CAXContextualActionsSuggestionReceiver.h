// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAXCONTEXTUALACTIONSSUGGESTIONRECEIVER_H
#define CAXCONTEXTUALACTIONSSUGGESTIONRECEIVER_H

@class NSXPCListener, NSString;
@protocol CAXContextualActionsXPCInterface, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "CAXSuggestionProvider.h"

@interface CAXContextualActionsSuggestionReceiver : NSObject <CAXContextualActionsXPCInterface, NSXPCListenerDelegate>

 {
    NSXPCListener *_xpcListener;
    CAXSuggestionProvider *_suggestionProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(void)dealloc;
-(void)donateSessionSummary:(id)arg0 ;
-(void)processShortcutsActionSelectionGivenFeedbackEvent:(id)arg0 ;
-(void)processShortcutsActionSelectionGivenFeedbackEvent:(id)arg0 completion:(id)arg1 ;
-(void)processShortcutsSessionGivenSummary:(id)arg0 ;
-(void)processShortcutsSessionGivenSummary:(id)arg0 completion:(id)arg1 ;
-(void)setupXPCListener;
-(void)startWithBlendingLayerServer:(id)arg0 ;


@end


#endif