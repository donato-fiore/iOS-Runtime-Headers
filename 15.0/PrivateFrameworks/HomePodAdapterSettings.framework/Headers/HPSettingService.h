// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSETTINGSERVICE_H
#define HPSETTINGSERVICE_H

@class NSXPCConnection, NSString;
@protocol HPXPCSettingServiceInterface;

#import <Foundation/Foundation.h>


@interface HPSettingService : NSObject <HPXPCSettingServiceInterface>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_accessorySettingKeyPathValueForHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPath:(id)arg2 internal:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)_homeKitSettingKeyPathValueForAccessoryIdentifier:(id)arg0 homeIdentifier:(id)arg1 keyPath:(id)arg2 value:(id)arg3 internal:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)accessorySettingKeyPathValueForHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPath:(id)arg2 completionHandler:(id)arg3 ;
// -(void)accessorySettingKeyPathValueInternal:(id)arg0 keyPath:(unk)arg1  ;
-(void)dealloc;
-(void)fetchHomeKitCachedSettingsInternal:(id)arg0 ;
-(void)homeKitSettingKeyPathValueForAccessoryIdentifier:(id)arg0 homeIdentifier:(id)arg1 keyPath:(id)arg2 value:(id)arg3 completionHandler:(id)arg4 ;
-(void)homeKitSettingKeyPathValueForAccessoryInternal:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidate;


@end


#endif