// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHPOSTPROCESSINGSTEP_H
#define CHPOSTPROCESSINGSTEP_H


#import <Foundation/Foundation.h>


@interface CHPostprocessingStep : NSObject

@property (readonly) BOOL modifiesOriginalTokens;


+(BOOL)shouldAdjustColumnsFromPostprocessingStepOptions:(id)arg0 ;
// +(id)applyTransform:(id)arg0 toAllTokens:(unk)arg1  ;
+(void)expandPathsWithCorrectedTokens:(id)arg0 fromTokens:(id)arg1 correctedTokenPath:(id)arg2 originalTokenPath:(id)arg3 ;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif