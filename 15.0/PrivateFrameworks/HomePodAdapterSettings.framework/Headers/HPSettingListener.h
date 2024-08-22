// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSETTINGLISTENER_H
#define HPSETTINGLISTENER_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, HPXPCSettingServiceInterface;

#import <Foundation/Foundation.h>


@interface HPSettingListener : NSObject <NSXPCListenerDelegate, HPXPCSettingServiceInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)accessorySettingKeyPathValueForHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPath:(id)arg2 completionHandler:(id)arg3 ;
// -(void)accessorySettingKeyPathValueInternal:(id)arg0 keyPath:(unk)arg1  ;
-(void)fetchHomeKitCachedSettingsInternal:(id)arg0 ;
-(void)homeKitSettingKeyPathValueForAccessoryIdentifier:(id)arg0 homeIdentifier:(id)arg1 keyPath:(id)arg2 value:(id)arg3 completionHandler:(id)arg4 ;
-(void)homeKitSettingKeyPathValueForAccessoryInternal:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif