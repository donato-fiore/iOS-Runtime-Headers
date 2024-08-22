// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIAUTOENHANCEFACE_H
#define CIAUTOENHANCEFACE_H


#import <Foundation/Foundation.h>


@interface CIAutoEnhanceFace : NSObject

@property (readonly) CGFloat I; // ivar: I
@property (readonly) CGFloat Q; // ivar: Q
@property (readonly) int centerX; // ivar: centerX
@property (readonly) int centerY; // ivar: centerY
@property (readonly) int size; // ivar: size


-(id)description;
-(id)initWithBounds:(struct CGRect )arg0 andImage:(id)arg1 usingContext:(id)arg2 ;
-(struct CGRect )faceRect;


@end


#endif