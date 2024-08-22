// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPFIRMWAREUPDATESTATUS_H
#define HAPFIRMWAREUPDATESTATUS_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPFirmwareUpdateStateWrapper.h"
#import "HAPTLVUnsignedNumberValue.h"

@interface HAPFirmwareUpdateStatus : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *stagedFirmwareVersion; // ivar: _stagedFirmwareVersion
@property (retain, nonatomic) HAPFirmwareUpdateStateWrapper *state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *updateDuration; // ivar: _updateDuration


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithState:(id)arg0 updateDuration:(id)arg1 stagedFirmwareVersion:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif