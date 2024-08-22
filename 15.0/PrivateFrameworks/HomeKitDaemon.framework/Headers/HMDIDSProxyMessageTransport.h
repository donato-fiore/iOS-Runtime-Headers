// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDIDSPROXYMESSAGETRANSPORT_H
#define HMDIDSPROXYMESSAGETRANSPORT_H



#import "HMDIDSMessageTransport.h"
#import "HMDCompanionManager.h"
#import "HMDWatchManager.h"

@interface HMDIDSProxyMessageTransport : HMDIDSMessageTransport

@property (readonly, nonatomic) HMDCompanionManager *companionManager; // ivar: _companionManager
@property (readonly, nonatomic) HMDWatchManager *watchManager; // ivar: _watchManager


+(BOOL)transportSupportsDevice:(id)arg0 ;
+(NSInteger)priorityForMessage:(id)arg0 ;
+(NSUInteger)restriction;
+(id)logCategory;
-(BOOL)canSendMessage:(id)arg0 ;
-(BOOL)isDeviceConnected:(id)arg0 ;
-(BOOL)isSecure;
-(NSInteger)qualityOfService;
-(id)deviceForHandle:(id)arg0 ;
-(id)deviceForSenderContext:(id)arg0 ;
-(id)initWithAccountRegistry:(id)arg0 ;
-(id)remoteMessageFromMessage:(id)arg0 ;
-(id)sendMessage:(id)arg0 fromHandle:(id)arg1 destination:(id)arg2 priority:(NSInteger)arg3 timeout:(CGFloat)arg4 options:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)watchDeviceForDevice:(id)arg0 ;
-(int)transportType;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif