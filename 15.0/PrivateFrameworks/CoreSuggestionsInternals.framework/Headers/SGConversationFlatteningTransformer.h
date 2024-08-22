// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGCONVERSATIONFLATTENINGTRANSFORMER_H
#define SGCONVERSATIONFLATTENINGTRANSFORMER_H

@class NSString;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGConversationFlatteningTransformer : NSObject <PMLTransformerProtocol>

 {
    NSObject<PMLTransformerProtocol> *_perMessageTranformer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)withPerMessageTransformer:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationFlatteningTransformer:(id)arg0 ;
-(id)initWithPerMessageTransformer:(id)arg0 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;


@end


#endif