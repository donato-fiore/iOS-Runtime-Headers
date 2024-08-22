// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFHARDWARECONTROLLERINFO_H
#define NFHARDWARECONTROLLERINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFHardwareControllerInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger ROMVersion; // ivar: _ROMVersion
@property (readonly, nonatomic) NSUInteger firmwareRevision; // ivar: _firmwareRevision
@property (readonly, nonatomic) NSUInteger firmwareVersion; // ivar: _firmwareVersion
@property (readonly, nonatomic) BOOL hasAntenna; // ivar: _hasAntenna
@property (readonly, nonatomic) BOOL hasBooster; // ivar: _hasBooster
@property (readonly, nonatomic) BOOL hasCarKeySupport; // ivar: _hasCarKeySupport
@property (readonly, nonatomic) BOOL hasExpressECPAccessMode; // ivar: _hasExpressECPAccessMode
@property (readonly, nonatomic) BOOL hasExpressFelicaTransitMode; // ivar: _hasExpressFelicaTransitMode
@property (readonly, nonatomic) BOOL hasExpressGenericAMode; // ivar: _hasExpressGenericAMode
@property (readonly, nonatomic) BOOL hasExpressSinglePollMode; // ivar: _hasExpressSinglePollMode
@property (readonly, nonatomic) BOOL hasHLMSupport; // ivar: _hasHLMSupport
@property (readonly, nonatomic) BOOL hasIcfResistor; // ivar: _hasIcfResistor
@property (readonly, nonatomic) BOOL hasLPCDSupport; // ivar: _hasLPCDSupport
@property (readonly, nonatomic) BOOL hasLPEMSupport; // ivar: _hasLPEMSupport
@property (readonly, nonatomic) BOOL hasMFW; // ivar: _hasMFW
@property (readonly, nonatomic) BOOL hasUnifiedAccessSupport; // ivar: _hasUnifiedAccessSupport
@property (readonly, nonatomic) NSUInteger middlewareVersion; // ivar: _middlewareVersion
@property (readonly, nonatomic) BOOL poweredRunDuringSleep; // ivar: _poweredRunDuringSleep
@property (readonly, nonatomic) NSUInteger siliconName; // ivar: _siliconName
@property (readonly, nonatomic) NSUInteger siliconVersion; // ivar: _siliconVersion


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif