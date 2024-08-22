// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTDOCUMENTINTERACTIONCONTROLLERNATIVEOBJECT_H
#define SUSCRIPTDOCUMENTINTERACTIONCONTROLLERNATIVEOBJECT_H

@class NSString;
@protocol UIDocumentInteractionControllerDelegate;


#import "SUScriptNativeObject.h"

@interface SUScriptDocumentInteractionControllerNativeObject : SUScriptNativeObject <UIDocumentInteractionControllerDelegate>

 {
    BOOL _didPickApplication;
    BOOL _isVisible;
    id *_presentationBlock;
    BOOL _redisplayAfterRotation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isAffectedByWindowNotification:(id)arg0 ;
-(void)_windowDidRotateNotification:(id)arg0 ;
-(void)_windowWillRotateNotification:(id)arg0 ;
-(void)dealloc;
-(void)destroyNativeObject;
-(void)documentInteractionController:(id)arg0 willBeginSendingToApplication:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg0 ;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg0 ;
-(void)presentUsingBlock:(id)arg0 ;
-(void)setupNativeObject;


@end


#endif