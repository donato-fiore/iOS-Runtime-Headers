// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHMULTIDATAANIMATINGFRAMELAYER_H
#define TSCHMULTIDATAANIMATINGFRAMELAYER_H

@class CALayer;
@protocol TSCHMultiDataAnimatingFrameLayerProtocol;



@interface TSCHMultiDataAnimatingFrameLayer : CALayer <TSCHMultiDataAnimatingFrameLayerProtocol>



@property (nonatomic) CGRect presentationBounds; // ivar: _presentationBounds
@property (nonatomic) CGPoint presentationPosition; // ivar: _presentationPosition


-(id)init;
-(id)initWithLayer:(id)arg0 ;
-(struct CGRect )currentFrame;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setPosition:(struct CGPoint )arg0 ;


@end


#endif