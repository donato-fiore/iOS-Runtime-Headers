// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSELECTEDSLEEPCONFIGURATIONTLV_H
#define HMDSELECTEDSLEEPCONFIGURATIONTLV_H

@class HAPTLVUnsignedNumberValue, NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDSleepConfigurationOperationStatusWrapper.h"
#import "HMDSleepConfigurationOperationTypeWrapper.h"

@interface HMDSelectedSleepConfigurationTLV : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVUnsignedNumberValue *backoffTime; // ivar: _backoffTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDSleepConfigurationOperationStatusWrapper *operationStatus; // ivar: _operationStatus
@property (retain, nonatomic) HMDSleepConfigurationOperationTypeWrapper *operationType; // ivar: _operationType
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOperationType:(id)arg0 operationStatus:(id)arg1 backoffTime:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif