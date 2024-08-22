// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRAVOUTPUTCONTEXTENDPOINT_H
#define MRAVOUTPUTCONTEXTENDPOINT_H

@class NSString, NSArray;
@protocol NSSecureCoding;


#import "MRAVEndpoint.h"
#import "MROrigin.h"
#import "MRAVConcreteOutputContext.h"
#import "MROutputContextController.h"

@interface MRAVOutputContextEndpoint : MRAVEndpoint <NSSecureCoding>

 {
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
}


@property (retain, nonatomic) MROrigin *origin; // ivar: _origin
@property (retain, nonatomic) MRAVConcreteOutputContext *outputContext; // ivar: _outputContext
@property (retain, nonatomic) MROutputContextController *outputContextController; // ivar: _outputContextController
@property (copy, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic, getter=isRealized) BOOL realized;


+(BOOL)supportsSecureCoding;
-(BOOL)canModifyGroupMembership;
-(BOOL)isConnected;
-(BOOL)isProxyGroupPlayer;
-(NSInteger)connectionType;
-(id)designatedGroupLeader;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOutputContext:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)personalOutputDevices;
-(id)uniqueIdentifier;
-(void)addOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)connectToExternalDeviceWithOptions:(unsigned int)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)outputContextDataSourceDidAddOutputDevice:(id)arg0 ;
-(void)outputContextDataSourceDidChangeOutputDevice:(id)arg0 ;
-(void)outputContextDataSourceDidRemoveOutputDevice:(id)arg0 ;
-(void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)arg0 ;
-(void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)arg0 ;
-(void)outputContextDataSourceReloaded:(id)arg0 ;
-(void)outputDeviceVolume:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)removeOutputDeviceFromParentGroup:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)removeOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)setOutputDeviceVolume:(float)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)volumeControlCapabilitiesForOutputDevice:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;


@end


#endif