// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPMATTERFIRMWAREUPDATESTATUS_H
#define HAPMATTERFIRMWAREUPDATESTATUS_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPOTAProviderStateWrapper.h"
#import "HAPTLVUnsignedNumberValue.h"

@interface HAPMatterFirmwareUpdateStatus : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPOTAProviderStateWrapper *OTAProviderState; // ivar: _OTAProviderState
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *accessoryDownloadProgressPercent; // ivar: _accessoryDownloadProgressPercent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *downloadedFirmwareVersionNumber; // ivar: _downloadedFirmwareVersionNumber
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOTAProviderState:(id)arg0 downloadedFirmwareVersionNumber:(id)arg1 accessoryDownloadProgressPercent:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif