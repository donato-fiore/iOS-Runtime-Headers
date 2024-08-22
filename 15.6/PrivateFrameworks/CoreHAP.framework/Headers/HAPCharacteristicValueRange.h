// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPCHARACTERISTICVALUERANGE_H
#define HAPCHARACTERISTICVALUERANGE_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>


@interface HAPCharacteristicValueRange : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *lowerBound; // ivar: _lowerBound
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *upperBound; // ivar: _upperBound


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithLowerBound:(id)arg0 upperBound:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif