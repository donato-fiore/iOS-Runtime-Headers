// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPRESENTATIONCONTROLLERROOTVIEWCONTROLLER_H
#define CKPRESENTATIONCONTROLLERROOTVIEWCONTROLLER_H

@class UIViewController;



@interface CKPresentationControllerRootViewController : UIViewController

@property (nonatomic) BOOL allowsRotation; // ivar: _allowsRotation
@property (nonatomic) BOOL restrictedToPortraitOrientation; // ivar: _restrictedToPortraitOrientation


-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;


@end


#endif