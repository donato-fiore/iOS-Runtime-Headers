// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKGRADIENTREFERENCEVIEW_H
#define CKGRADIENTREFERENCEVIEW_H

@class UIView, NSString;
@protocol CKGradientReferenceView;



@interface CKGradientReferenceView : UIView <CKGradientReferenceView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect gradientFrame; // ivar: _gradientFrame
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif