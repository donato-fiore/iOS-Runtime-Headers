// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPGRAPHICSSTATE_H
#define MFPGRAPHICSSTATE_H


#import <Foundation/Foundation.h>


@interface MFPGraphicsState : NSObject {
    CGAffineTransform mPageTransform;
    CGAffineTransform mWorldTransform;
}




-(id)initWithDefaults;
-(id)initWithGraphicsState:(id)arg0 ;
-(struct CGAffineTransform )pageTransform;
-(struct CGAffineTransform )worldTransform;
-(void)multiplyWorldTransformBy:(struct CGAffineTransform )arg0 order:(int)arg1 ;
-(void)removeTransform:(struct CGAffineTransform )arg0 ;
-(void)setPageTransform:(struct CGAffineTransform )arg0 ;
-(void)setWorldTransform:(struct CGAffineTransform )arg0 ;


@end


#endif