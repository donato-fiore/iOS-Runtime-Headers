// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDWAKECONFIGURATION_H
#define HMDWAKECONFIGURATION_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDWakeConfigurationParameters.h"

@interface HMDWakeConfiguration : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HMDWakeConfigurationParameters *custom1; // ivar: _custom1
@property (retain, nonatomic) HMDWakeConfigurationParameters *custom2; // ivar: _custom2
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *reserved; // ivar: _reserved
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithReserved:(id)arg0 custom1:(id)arg1 custom2:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif