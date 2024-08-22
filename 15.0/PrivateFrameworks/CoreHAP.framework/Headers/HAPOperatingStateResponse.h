// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPOPERATINGSTATERESPONSE_H
#define HAPOPERATINGSTATERESPONSE_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPOperatingStateAbnormalReasonsWrapper.h"
#import "HAPOperatingStateWrapper.h"

@interface HAPOperatingStateResponse : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPOperatingStateAbnormalReasonsWrapper *abnormalReasons; // ivar: _abnormalReasons
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPOperatingStateWrapper *state; // ivar: _state
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithState:(id)arg0 abnormalReasons:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif