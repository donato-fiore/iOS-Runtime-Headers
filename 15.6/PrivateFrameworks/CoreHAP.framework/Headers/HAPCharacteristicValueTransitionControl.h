// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPCHARACTERISTICVALUETRANSITIONCONTROL_H
#define HAPCHARACTERISTICVALUETRANSITIONCONTROL_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPCharacteristicValueTransitionFetch.h"
#import "HAPCharacteristicValueTransitionStart.h"

@interface HAPCharacteristicValueTransitionControl : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPCharacteristicValueTransitionFetch *transitionFetch; // ivar: _transitionFetch
@property (retain, nonatomic) HAPCharacteristicValueTransitionStart *transitionStart; // ivar: _transitionStart


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTransitionFetch:(id)arg0 transitionStart:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif