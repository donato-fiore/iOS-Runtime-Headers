// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPACCESSCODECONFIGURATION_H
#define HAPACCESSCODECONFIGURATION_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPAccessCodeCharacterSetWrapper.h"
#import "HAPTLVUnsignedNumberValue.h"

@interface HAPAccessCodeConfiguration : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPAccessCodeCharacterSetWrapper *characterSet; // ivar: _characterSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *maximumAccessCodes; // ivar: _maximumAccessCodes
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *maximumValueLength; // ivar: _maximumValueLength
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *minimumValueLength; // ivar: _minimumValueLength
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCharacterSet:(id)arg0 minimumValueLength:(id)arg1 maximumValueLength:(id)arg2 maximumAccessCodes:(id)arg3 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif