// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICPEERMESSAGECONTROLLER_H
#define ICPEERMESSAGECONTROLLER_H

@class NSMutableDictionary;
@protocol ICPeerMessageControllerDelegate;

#import <Foundation/Foundation.h>


@interface ICPeerMessageController : NSObject {
    NSMutableDictionary *_deviceRequests;
    NSMutableDictionary *_sourceToDevices;
    NSMutableDictionary *_deviceUUIDToSource;
}


@property (weak, nonatomic) NSObject<ICPeerMessageControllerDelegate> *delegate; // ivar: _delegate


-(id)deviceRequestsForUUID:(id)arg0 ;
-(id)init;
-(id)mediaRequestForDevice:(id)arg0 withIdentifier:(id)arg1 ;
-(id)sendMessage:(*void)arg0 toDevices:(id)arg1 ;
-(id)sendMessage:(*void)arg0 toSource:(id)arg1 completionBlock:(id)arg2 ;
-(id)sendMessage:(*void)arg0 toSources:(id)arg1 ;
-(id)sendNote:(id)arg0 toDevices:(id)arg1 ;
-(void)didFinishReceivingResourceWithName:(id)arg0 fromSource:(id)arg1 atURL:(id)arg2 withError:(id)arg3 ;
-(void)disconnectedFromSource:(id)arg0 ;
-(void)handleAttachment:(*void)arg0 fromDevice:(id)arg1 ;
-(void)handleKeepAliveMessage:(*void)arg0 fromDevice:(id)arg1 ;
-(void)handleMediaMessage:(*void)arg0 fromDevice:(id)arg1 ;
-(void)handleMessage:(id)arg0 fromSource:(id)arg1 ;
-(void)handleNoteMessage:(*void)arg0 fromDevice:(id)arg1 data:(id)arg2 ;
-(void)handleRequestAttachment:(*void)arg0 fromDevice:(id)arg1 ;
-(void)handleRequestMedia:(*void)arg0 fromDevice:(id)arg1 ;
-(void)handleRequestNoteMessage:(*void)arg0 fromDevice:(id)arg1 ;
-(void)handleUnavailableMediaMessage:(*void)arg0 fromDevice:(id)arg1 ;
-(void)requestAttachment:(id)arg0 ;
-(void)requestMedia:(id)arg0 ;
-(void)requestNote:(id)arg0 from:(id)arg1 ;
-(void)sendKeepAlive;
-(void)sendMediaURL:(id)arg0 toSource:(id)arg1 ;


@end


#endif