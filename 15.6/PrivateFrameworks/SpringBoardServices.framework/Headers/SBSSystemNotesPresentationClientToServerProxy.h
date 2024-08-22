// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSSYSTEMNOTESPRESENTATIONCLIENTTOSERVERPROXY_H
#define SBSSYSTEMNOTESPRESENTATIONCLIENTTOSERVERPROXY_H

@class BSServiceConnection, NSString;
@protocol SBSSystemNotesPresentationClientToServerInterface, BSInvalidatable, OS_dispatch_queue, SBSSystemNotesPresentationServerToClientInterface;

#import <Foundation/Foundation.h>

#import "SBSSystemNotesPresentationConfiguration.h"

@interface SBSSystemNotesPresentationClientToServerProxy : NSObject <SBSSystemNotesPresentationClientToServerInterface, BSInvalidatable>

 {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    SBSSystemNotesPresentationConfiguration *_requestedConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSSystemNotesPresentationServerToClientInterface> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_setupAndActivateConnection;
-(void)activateConfiguration:(id)arg0 ;
-(void)invalidate;
-(void)presentWithConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif