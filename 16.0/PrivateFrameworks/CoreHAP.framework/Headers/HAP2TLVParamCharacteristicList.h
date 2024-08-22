// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2TLVPARAMCHARACTERISTICLIST_H
#define HAP2TLVPARAMCHARACTERISTICLIST_H

@class NSMutableArray, NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>


@interface HAP2TLVParamCharacteristicList : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) NSMutableArray *characteristicSignatureList; // ivar: _characteristicSignatureList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCharacteristicSignatureList:(id)arg0 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif