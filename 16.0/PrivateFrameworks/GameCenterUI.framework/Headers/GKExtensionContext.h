// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKEXTENSIONCONTEXT_H
#define GKEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString, GKGame;
@protocol GKExtensionProtocol;



@interface GKExtensionContext : NSExtensionContext <GKExtensionProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GKGame *game; // ivar: _game
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger sandboxToken; // ivar: _sandboxToken
@property (readonly) Class superclass;


-(void)dealloc;
-(void)hostApp:(id)arg0 grantingAccessExtensionSandbox:(id)arg1 replyWithEndpoint:(id)arg2 ;
-(void)messageFromClient:(id)arg0 ;
-(void)setInitialState:(id)arg0 withReply:(id)arg1 ;
-(void)tearDownExtensionWithReply:(id)arg0 ;


@end


#endif