// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLEGACYMODELCONTAINER_H
#define HMDLEGACYMODELCONTAINER_H

@class HMBModelContainer, HMFPairingIdentity;



@interface HMDLegacyModelContainer : HMBModelContainer

@property (readonly, nonatomic) HMFPairingIdentity *pairingIdentity; // ivar: _pairingIdentity


-(Class)modelClassForTypeName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodePropertyValueFromData:(id)arg0 forProperty:(id)arg1 field:(id)arg2 storageLocation:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)decryptData:(id)arg0 decompress:(BOOL)arg1 error:(*id)arg2 ;
-(id)encodePropertyValue:(id)arg0 forProperty:(id)arg1 field:(id)arg2 storageLocation:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)encryptData:(id)arg0 compress:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithDataVersion:(id)arg0 legacyDataVersion:(id)arg1 pairingIdentity:(id)arg2 ;
-(id)modelFromData:(id)arg0 encoding:(NSUInteger)arg1 storageLocation:(NSUInteger)arg2 type:(id)arg3 error:(*id)arg4 ;


@end


#endif