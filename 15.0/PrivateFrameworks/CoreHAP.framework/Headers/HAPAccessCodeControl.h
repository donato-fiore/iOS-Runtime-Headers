// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPACCESSCODECONTROL_H
#define HAPACCESSCODECONTROL_H

@class NSMutableArray, NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPAccessCodeOperationTypeWrapper.h"

@interface HAPAccessCodeControl : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) NSMutableArray *accessCodeControlRequest; // ivar: _accessCodeControlRequest
@property (retain, nonatomic) NSMutableArray *accessCodeControlResponse; // ivar: _accessCodeControlResponse
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPAccessCodeOperationTypeWrapper *operationType; // ivar: _operationType
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOperationType:(id)arg0 accessCodeControlRequest:(id)arg1 accessCodeControlResponse:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif