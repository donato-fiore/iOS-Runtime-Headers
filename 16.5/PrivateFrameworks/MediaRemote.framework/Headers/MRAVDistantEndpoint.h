// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVDISTANTENDPOINT_H
#define MRAVDISTANTENDPOINT_H

@class NSString, NSArray, NSXPCListenerEndpoint;
@protocol NSSecureCoding, OS_dispatch_queue;


#import "MRAVEndpoint.h"
#import "MRDistantExternalDevice.h"
#import "MRAVDistantOutputDevice.h"

@interface MRAVDistantEndpoint : MRAVEndpoint <NSSecureCoding>

 {
    BOOL _canModifyGroupMembership;
    NSInteger _connectionType;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
}


@property (retain, nonatomic) MRDistantExternalDevice *distantExternalDevice; // ivar: _distantExternalDevice
@property (retain, nonatomic) MRAVDistantOutputDevice *distantGroupLeader; // ivar: _distantGroupLeader
@property (copy, nonatomic) NSArray *distantOutputDevices; // ivar: _distantOutputDevices
@property (copy, nonatomic) NSArray *distantPersonalOutputDevices; // ivar: _distantPersonalOutputDevices
@property (retain, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint; // ivar: _externalDeviceListenerEndpoint
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceQueue; // ivar: _externalDeviceQueue


+(BOOL)supportsSecureCoding;
+(id)externalDeviceFactory;
-(BOOL)canModifyGroupMembership;
-(BOOL)isProxyGroupPlayer;
-(NSInteger)connectionType;
-(id)_externalOutputContext;
-(id)debugDescription;
-(id)designatedGroupLeader;
-(id)externalDevice;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 ;
-(id)localizedName;
-(id)outputDevices;
-(id)personalOutputDevices;
-(id)uniqueIdentifier;
-(void)_handleConnectionStateDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setLocalizedName:(id)arg0 ;
-(void)setUniqueIdentifier:(id)arg0 ;


@end


#endif