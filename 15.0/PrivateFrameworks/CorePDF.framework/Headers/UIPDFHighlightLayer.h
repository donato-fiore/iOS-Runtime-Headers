// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPDFHIGHLIGHTLAYER_H
#define UIPDFHIGHLIGHTLAYER_H

@class CALayer;



@interface UIPDFHighlightLayer : CALayer {
    *CGPath _clipPath;
    *CGPath _borderPath;
}


@property (nonatomic) *CGPath borderPath;
@property (nonatomic) *CGPath clipPath;
@property (nonatomic) CGPoint offset; // ivar: offset


-(void)dealloc;


@end


#endif