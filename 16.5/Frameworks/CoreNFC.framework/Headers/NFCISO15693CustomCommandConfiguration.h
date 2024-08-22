// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFCISO15693CUSTOMCOMMANDCONFIGURATION_H
#define NFCISO15693CUSTOMCOMMANDCONFIGURATION_H

@class NSData;


#import "NFCTagCommandConfiguration.h"

@interface NFCISO15693CustomCommandConfiguration : NFCTagCommandConfiguration

@property (nonatomic) NSUInteger customCommandCode; // ivar: _customCommandCode
@property (nonatomic) unsigned char flags; // ivar: _flags
@property (nonatomic) NSUInteger manufacturerCode; // ivar: _manufacturerCode
@property (copy, nonatomic) NSData *requestParameters; // ivar: _requestParameters


-(id)asNSDataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithManufacturerCode:(NSUInteger)arg0 customCommandCode:(NSUInteger)arg1 requestParameters:(id)arg2 ;
-(id)initWithManufacturerCode:(NSUInteger)arg0 customCommandCode:(NSUInteger)arg1 requestParameters:(id)arg2 maximumRetries:(NSUInteger)arg3 retryInterval:(CGFloat)arg4 ;


@end


#endif