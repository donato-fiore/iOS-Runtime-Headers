// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAIRMESSAGENOTIFICATIONCENTER_H
#define AVAIRMESSAGENOTIFICATIONCENTER_H

@class NSMutableSet, NSString, AVBonjourService, AVPlayerItem;
@protocol AVBonjourServiceDelegate, AVAirTransportDelegate, AVAirMessageNotificationCenterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVAirMessageNotificationCenter : NSObject <AVBonjourServiceDelegate, AVAirTransportDelegate>

 {
    BOOL _started;
}


@property (retain, nonatomic) NSMutableSet *activeChannels; // ivar: _activeChannels
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVAirMessageNotificationCenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVBonjourService *mainService; // ivar: _mainService
@property (retain, nonatomic) AVPlayerItem *nowPlayingPlayerItem; // ivar: _nowPlayingPlayerItem
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(BOOL)_isNotificationCenterEnabled;
+(BOOL)isPrepared;
+(id)shared;
+(void)prepare;
-(id)_initPrivate;
-(id)bonjourServiceAdditionalTXTRecordInfo:(id)arg0 ;
-(id)init;
-(id)playerItemForIdentifier:(id)arg0 ;
-(void)airTransport:(id)arg0 didReceiveObject:(id)arg1 ;
-(void)airTransportInputDidClose:(id)arg0 ;
-(void)bonjourService:(id)arg0 didAcceptConnectionChannel:(id)arg1 ;
-(void)bonjourService:(id)arg0 didCloseChannel:(id)arg1 ;
-(void)dealloc;
-(void)handleCommandMessage:(id)arg0 completion:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif