// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKPARTIALSHEETNAVIGATIONCONTROLLER_H
#define FBKPARTIALSHEETNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol UIAdaptivePresentationControllerDelegate;



@interface FBKPartialSheetNavigationController : UINavigationController <UIAdaptivePresentationControllerDelegate>



@property (nonatomic) CGFloat customDetentHeight; // ivar: _customDetentHeight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger detentBehavior; // ivar: _detentBehavior
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)detentForCustomHeight:(CGFloat)arg0 ;
-(id)detentForPreferredContentSize;
-(void)_presentationController:(id)arg0 prepareAdaptivePresentationController:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif