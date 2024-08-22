// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACHEDELETEREMOTEEXTENSIONCONTEXT_H
#define CACHEDELETEREMOTEEXTENSIONCONTEXT_H

@class NSExtensionContext;
@protocol CacheDeleteServiceProtocol;



@interface CacheDeleteRemoteExtensionContext : NSExtensionContext <CacheDeleteServiceProtocol>





+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)init;
-(void)serviceCallback:(id)arg0 replyBlock:(id)arg1 ;
-(void)serviceCancelPurge:(id)arg0 ;
-(void)serviceNotify:(id)arg0 replyBlock:(id)arg1 ;
-(void)servicePeriodic:(int)arg0 info:(id)arg1 replyBlock:(id)arg2 ;
-(void)servicePing:(id)arg0 ;
-(void)servicePurge:(int)arg0 info:(id)arg1 replyBlock:(id)arg2 ;
-(void)servicePurgeable:(int)arg0 info:(id)arg1 replyBlock:(id)arg2 ;


@end


#endif