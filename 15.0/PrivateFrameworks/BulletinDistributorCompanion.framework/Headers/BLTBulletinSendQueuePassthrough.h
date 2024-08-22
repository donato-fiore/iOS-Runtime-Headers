// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTBULLETINSENDQUEUEPASSTHROUGH_H
#define BLTBULLETINSENDQUEUEPASSTHROUGH_H

@protocol BLTBulletinSendQueueDelegate;

#import <Foundation/Foundation.h>


@interface BLTBulletinSendQueuePassthrough : NSObject

@property (weak, nonatomic) NSObject<BLTBulletinSendQueueDelegate> *delegate; // ivar: _delegate


-(BOOL)handleFileURL:(id)arg0 ;
-(void)queuePending;
-(void)sendNow;
// -(void)sendRequest:(id)arg0 type:(unsigned short)arg1 didSend:(id)arg2 didQueue:(unk)arg3  ;
-(void)sendRequest:(id)arg0 withTimeout:(id)arg1 isTrafficRestricted:(BOOL)arg2 didSend:(id)arg3 ;


@end


#endif