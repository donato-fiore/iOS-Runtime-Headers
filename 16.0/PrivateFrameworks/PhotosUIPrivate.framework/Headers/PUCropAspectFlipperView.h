// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCROPASPECTFLIPPERVIEW_H
#define PUCROPASPECTFLIPPERVIEW_H

@class UIView, UIButton, NSArray;
@protocol PUCropAspectViewControllerDelegate;



@interface PUCropAspectFlipperView : UIView {
    UIButton *_horizontalAspectButton;
    UIButton *_verticalAspectButton;
    NSArray *_layoutConstraints;
}


@property (nonatomic) NSInteger aspectRatioOrientation; // ivar: _aspectRatioOrientation
@property (weak, nonatomic) NSObject<PUCropAspectViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation


-(id)initWithLayoutOrientation:(NSInteger)arg0 ;
-(void)aspectRatioButtonPressed:(id)arg0 ;


@end


#endif