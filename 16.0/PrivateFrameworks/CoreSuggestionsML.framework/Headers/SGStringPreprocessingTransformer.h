// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGSTRINGPREPROCESSINGTRANSFORMER_H
#define SGSTRINGPREPROCESSINGTRANSFORMER_H

@class NSArray, NSMethodSignature, NSString;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGStringPreprocessingTransformer : NSObject <PMLTransformerProtocol>

 {
    NSArray *_methodNames;
    NSArray *_methodValues;
    NSMethodSignature *_methodSignatureNoValue;
    NSMethodSignature *_methodSignatureWithValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)withMethods:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStringPreprocessingTransformer:(id)arg0 ;
-(SEL)selectorForMethod:(id)arg0 preprocessor:(id)arg1 ;
-(id)initWithMethods:(id)arg0 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;
-(id)transformBatch:(id)arg0 ;
-(void)applySelector:(SEL)arg0 preprocesor:(id)arg1 string:(id)arg2 value:(id)arg3 ;


@end


#endif