// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEKEYEDARCHIVER_H
#define HMDREMOTEKEYEDARCHIVER_H

@class HMFObject, NSKeyedArchiver, NSData, NSString;



@interface HMDRemoteKeyedArchiver : HMFObject

@property (retain, nonatomic) NSKeyedArchiver *archiver; // ivar: _archiver
@property (readonly, copy) NSData *encodedData;
@property (retain, nonatomic) NSString *transportType; // ivar: _transportType


-(id)initForWritingWithRemoteDeviceIsOnSameAccount:(BOOL)arg0 remoteGateway:(BOOL)arg1 remoteUserIsAdministrator:(BOOL)arg2 user:(id)arg3 dataVersion:(NSInteger)arg4 supportedFeatures:(id)arg5 ;
-(id)initForWritingWithRemoteDeviceIsOnSameAccount:(BOOL)arg0 remoteGateway:(BOOL)arg1 remoteUserIsAdministrator:(BOOL)arg2 user:(id)arg3 supportedFeatures:(id)arg4 ;
-(void)dealloc;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)finishEncoding;
-(void)setClassName:(id)arg0 forClass:(Class)arg1 ;


@end


#endif