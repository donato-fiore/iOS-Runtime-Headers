// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBPEER_H
#define CBPEER_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CBManager.h"

@interface CBPeer : NSObject <NSCopying>



@property (nonatomic) unsigned char connectedTransport; // ivar: _connectedTransport
@property (nonatomic) NSInteger hostState; // ivar: _hostState
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isLinkEncrypted; // ivar: _isLinkEncrypted
@property (weak, nonatomic) CBManager *manager; // ivar: _manager
@property (nonatomic) NSUInteger mtuLength; // ivar: _mtuLength
@property (nonatomic) NSInteger pairingState; // ivar: _pairingState
@property (nonatomic) NSInteger role; // ivar: _role


-(BOOL)hasTag:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithInfo:(id)arg0 manager:(id)arg1 ;
-(id)peerStateToString:(NSInteger)arg0 ;
-(id)sendInternalSyncMsg:(int)arg0 args:(id)arg1 ;
-(void)handleHostStateUpdated:(id)arg0 ;
-(void)handleLinkEncryptionChanged:(id)arg0 ;
-(void)handleMTUChanged:(id)arg0 ;
-(void)handleMsg:(int)arg0 args:(id)arg1 ;
-(void)sendInternalMsg:(int)arg0 args:(id)arg1 ;
-(void)tag:(id)arg0 ;
-(void)untag:(id)arg0 ;


@end


#endif