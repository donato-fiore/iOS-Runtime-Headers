// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGTEXTLABELTRANSFORMER_H
#define SGTEXTLABELTRANSFORMER_H

@class NSString;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>

#import "SGStringPreprocessingTransformer.h"
#import "SGStringLabelingTransformer.h"

@interface SGTextLabelTransformer : NSObject <PMLTransformerProtocol>

 {
    SGStringPreprocessingTransformer *_preprocessor;
    SGStringLabelingTransformer *_labeler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_preprocessedLabelsWithLabels:(id)arg0 andPreprocessor:(id)arg1 ;
+(id)withMethods:(id)arg0 withLabelStrings:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextLabelTransformer:(id)arg0 ;
-(id)initWithMethods:(id)arg0 withLabelStrings:(id)arg1 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithPreprocessor:(id)arg0 labeler:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;


@end


#endif