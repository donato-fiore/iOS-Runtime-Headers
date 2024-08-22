// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UARPMANIFESTPROPERTIES_H
#define UARPMANIFESTPROPERTIES_H

@class NSNumber, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPManifestProperties : NSObject <NSCopying, NSSecureCoding>



@property (readonly) unsigned int boardID; // ivar: _boardID
@property (retain) NSNumber *chipEpoch; // ivar: _chipEpoch
@property (readonly) unsigned int chipID; // ivar: _chipID
@property (retain) NSNumber *ecID; // ivar: _ecID
@property BOOL effectiveProductionMode; // ivar: _effectiveProductionMode
@property BOOL effectiveSecurityMode; // ivar: _effectiveSecurityMode
@property (retain) NSNumber *enableMixMatch; // ivar: _enableMixMatch
@property (copy) NSData *nonce; // ivar: _nonce
@property (readonly) BOOL productionMode; // ivar: _productionMode
@property (readonly) NSUInteger securityDomain; // ivar: _securityDomain
@property (readonly) BOOL securityMode; // ivar: _securityMode
@property BOOL supportsImg4; // ivar: _supportsImg4


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBoardID:(unsigned int)arg0 chipID:(unsigned int)arg1 securityDomain:(NSUInteger)arg2 securityMode:(BOOL)arg3 productionMode:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif