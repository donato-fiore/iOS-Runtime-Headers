// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPAIMAGETRANSFORMSEQUENCE_H
#define IPAIMAGETRANSFORMSEQUENCE_H

@class NSArray;
@protocol IPAImageTransform;

#import <Foundation/Foundation.h>


@interface IPAImageTransformSequence : NSObject <IPAImageTransform>

 {
    NSArray *_transforms;
}




-(BOOL)canAlignToPixelsExactly;
-(id)description;
-(id)initWithTransforms:(id)arg0 ;
-(id)inputGeometry;
-(id)intrinsicGeometry;
-(id)inverseTransform;
-(struct CGPoint )mapPoint:(struct CGPoint )arg0 ;


@end


#endif