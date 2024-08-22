// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICHANDOFFCONTROLLER_H
#define ICHANDOFFCONTROLLER_H

@class NSString;
@protocol ICPeerMessageControllerDelegate, ICPeerInputStreamDelegate;

#import <Foundation/Foundation.h>

#import "ICPeerInputStream.h"
#import "ICPeerOutputStream.h"
#import "ICPeerMessageController.h"

@interface ICHandoffController : NSObject <ICPeerMessageControllerDelegate, ICPeerInputStreamDelegate>

 {
    ICPeerInputStream *_inputStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) ICPeerInputStream *inputStream;
@property (retain) ICPeerOutputStream *outputStream; // ivar: _outputStream
@property (retain) ICPeerMessageController *peerController; // ivar: _peerController
@property (readonly) Class superclass;


+(id)sharedController;
-(BOOL)sendMessage:(id)arg0 toSource:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(void)didDisconnectInputStream:(id)arg0 ;
-(void)didReceiveInputStream:(id)arg0 outputStream:(id)arg1 ;
-(void)handleMessage:(id)arg0 fromInputStream:(id)arg1 ;
-(void)requestNoteWithIdentifier:(id)arg0 ;
-(void)sendMedia:(id)arg0 toSource:(id)arg1 ;


@end


#endif