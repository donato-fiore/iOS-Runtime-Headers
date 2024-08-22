// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHPOSTPROCESSINGSTEP_H
#define CHPOSTPROCESSINGSTEP_H


#import <Foundation/Foundation.h>


@interface CHPostprocessingStep : NSObject



// +(id)applyTransform:(id)arg0 toAllTokens:(unk)arg1  ;
+(void)expandPathsWithCorrectedTokens:(id)arg0 fromTokens:(id)arg1 correctedTokenPath:(id)arg2 originalTokenPath:(id)arg3 ;
-(id)process:(id)arg0 ;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif