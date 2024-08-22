// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGPIPELINETRANSFORMER_H
#define SGPIPELINETRANSFORMER_H

@class NSString, NSArray;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGPipelineTransformer : NSObject <PMLTransformerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) NSArray *transformers; // ivar: _transformers


+(id)withTransformers:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPipelineTransformer:(id)arg0 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithTransformers:(id)arg0 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;
-(id)transform:(id)arg0 stopAfterTransformerWithIndex:(NSUInteger)arg1 ;


@end


#endif