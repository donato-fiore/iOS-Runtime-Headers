// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIREFRAMEKEYFRAMESEQUENCE_H
#define PIREFRAMEKEYFRAMESEQUENCE_H

@class NUKeyframeSequenceMatrixFloat33;

#import <Foundation/Foundation.h>


@interface PIReframeKeyframeSequence : NSObject {
    NUKeyframeSequenceMatrixFloat33 *_homographySequence;
}


@property (readonly, nonatomic) NSUInteger count;


-(NSInteger)interpolation;
-(id)initWithKeyframeArray:(id)arg0 ;
-(id)sparseSequence;
-(struct ? )homographyAtTime:(struct ? )arg0 ;


@end


#endif