// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWPRESENTATIONMANAGER_H
#define SWPRESENTATIONMANAGER_H

@class NSString;
@protocol SWMessageHandler, SWPresentationManager, SWLogger, SWScriptsManager;

#import <Foundation/Foundation.h>


@interface SWPresentationManager : NSObject <SWMessageHandler, SWPresentationManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (copy, nonatomic, setter=onLoad:) id *loadBlock; // ivar: loadBlock
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (copy, nonatomic, setter=onPresentable:) id *presentableBlock; // ivar: presentableBlock
@property (nonatomic) NSUInteger presentationState; // ivar: _presentationState
@property (readonly, nonatomic) NSObject<SWScriptsManager> *scriptsManager; // ivar: _scriptsManager
@property (readonly) Class superclass;


-(id)descriptionForPresentationState:(NSUInteger)arg0 ;
-(id)initWithWebContentScriptsManager:(id)arg0 messageHandlerManager:(id)arg1 documentStateProvider:(id)arg2 logger:(id)arg3 ;
-(void)didReceiveMessage:(id)arg0 securityOrigin:(id)arg1 ;
-(void)onLoad:(id)arg0 ;
-(void)onPresentable:(id)arg0 ;
-(void)refresh;


@end


#endif