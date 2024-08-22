// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAXCONTEXTUALACTIONSCLIENT_H
#define CAXCONTEXTUALACTIONSCLIENT_H

@class NSString, NSXPCConnection;
@protocol CAXContextualActionsXPCInterface;

#import <Foundation/Foundation.h>


@interface CAXContextualActionsClient : NSObject <CAXContextualActionsXPCInterface>

 {
    NSString *_clientModelId;
    NSXPCConnection *_xpcConnection;
}




-(id)initWithClientModelId:(id)arg0 ;
-(void)dealloc;
-(void)processShortcutsActionSelectionGivenFeedbackEvent:(id)arg0 ;
-(void)processShortcutsActionSelectionGivenFeedbackEvent:(id)arg0 completion:(id)arg1 ;
-(void)processShortcutsSessionGivenSummary:(id)arg0 ;
-(void)processShortcutsSessionGivenSummary:(id)arg0 completion:(id)arg1 ;


@end


#endif