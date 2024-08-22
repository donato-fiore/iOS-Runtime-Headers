// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSUPPORTEDSLEEPCONFIGURATIONTLV_H
#define HMDSUPPORTEDSLEEPCONFIGURATIONTLV_H

@class NSString, NSMutableArray, HAPTLVUnsignedNumberValue;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>


@interface HMDSupportedSleepConfigurationTLV : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *supportedWoLPacketConfigurations; // ivar: _supportedWoLPacketConfigurations
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *version; // ivar: _version


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithVersion:(id)arg0 supportedWoLPacketConfigurations:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif