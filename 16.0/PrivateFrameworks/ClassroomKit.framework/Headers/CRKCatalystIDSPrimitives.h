// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCATALYSTIDSPRIMITIVES_H
#define CRKCATALYSTIDSPRIMITIVES_H

@protocol CATIDSPrimitives, CRKIDSAddressTranslator, CRKIDSPrimitives;

#import <Foundation/Foundation.h>


@interface CRKCatalystIDSPrimitives : NSObject <CATIDSPrimitives>



@property (readonly, nonatomic) NSObject<CRKIDSAddressTranslator> *addressTranslator; // ivar: _addressTranslator
@property (readonly, nonatomic) NSObject<CRKIDSPrimitives> *primitives; // ivar: _primitives


+(id)crkOptionsFromOptions:(id)arg0 ;
-(id)addressForAppleID:(id)arg0 ;
-(id)initWithPrimitives:(id)arg0 addressTranslator:(id)arg1 ;
// -(void)addMessageHandler:(id)arg0 completion:(unk)arg1  ;
-(void)sendMessage:(id)arg0 toAddress:(id)arg1 fromID:(id)arg2 options:(id)arg3 completion:(id)arg4 ;


@end


#endif