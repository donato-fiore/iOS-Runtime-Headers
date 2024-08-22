// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPCHARACTERISTICNOTIFICATIONCONTEXT_H
#define HAPCHARACTERISTICNOTIFICATIONCONTEXT_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVUnsignedNumberValue.h"
#import "HAPNotificationContextSourceWrapper.h"

@interface HAPCharacteristicNotificationContext : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVUnsignedNumberValue *clockTickCounter; // ivar: _clockTickCounter
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *contextIdentifier; // ivar: _contextIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPNotificationContextSourceWrapper *source; // ivar: _source
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithContextIdentifier:(id)arg0 source:(id)arg1 clockTickCounter:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif