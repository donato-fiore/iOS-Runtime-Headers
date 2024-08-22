// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KEEPALIVEMANAGER_H
#define KEEPALIVEMANAGER_H

@class PCConnectionManager, NSString;
@protocol PCConnectionManagerDelegate;

#import <Foundation/Foundation.h>


@interface KeepAliveManager : NSObject <PCConnectionManagerDelegate>

 {
    PCConnectionManager *_manager;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _keepAliveId;
    *ImsKeepAliveDelegate _delegate;
    BOOL _enableWakeUpOnWifi;
    BOOL _keepAliveStarted;
    *__WiFiManagerClient _wifiManagerRef;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithIdentifier:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg0 maxInterval:(CGFloat)arg1 enableWakeUp:(BOOL)arg2 delegate:(struct ImsKeepAliveDelegate *)arg3 ;
-(void)connectionManager:(id)arg0 handleEvent:(int)arg1 ;
-(void)dealloc;
-(void)growKeepAliveInterval;
-(void)shrinkKeepAliveInterval;
-(void)startKeepAlive;
-(void)startWakeUpOnWifi;
-(void)stopKeepAlive;
-(void)stopWakeUpOnWifi;


@end


#endif