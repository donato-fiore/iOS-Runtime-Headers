// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSELECTIVETRANSFORMER_H
#define SGSELECTIVETRANSFORMER_H

@class NSString;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGSelectiveTransformer : NSObject <PMLTransformerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *inputKey; // ivar: _inputKey
@property (readonly) Class superclass;
@property (retain) NSObject<PMLTransformerProtocol> *transformer; // ivar: _transformer


+(id)withTransformer:(id)arg0 appliedToInputKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSGSelectiveTransformer:(id)arg0 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithTransformer:(id)arg0 appliedToInputKey:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;


@end


#endif