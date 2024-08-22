// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKACTIONSHEET_H
#define WKACTIONSHEET_H

@class UIAlertController;
@protocol WKActionSheetDelegate;



@interface WKActionSheet : UIAlertController {
    BOOL _isRotating;
    BOOL _readyToPresentAfterRotation;
    NSInteger _currentPresentationStyle;
    RetainPtr<UIViewController> _currentPresentingViewController;
    RetainPtr<UIViewController> _presentedViewControllerWhileRotating;
    RetainPtr<id<UIPopoverPresentationControllerDelegate>> _popoverPresentationControllerDelegateWhileRotating;
}


@property (nonatomic) NSUInteger arrowDirections; // ivar: _arrowDirections
@property (nonatomic) NSObject<WKActionSheetDelegate> *sheetDelegate; // ivar: _sheetDelegate


-(BOOL)presentSheet:(NSInteger)arg0 ;
-(BOOL)presentSheetFromRect:(struct CGRect )arg0 ;
-(id)init;
-(struct CGRect )_presentationRectForStyle:(NSInteger)arg0 ;
-(void)_cleanup;
-(void)_didRotateAndLayout;
-(void)dealloc;
-(void)didRotate;
-(void)doneWithSheet:(BOOL)arg0 ;
-(void)updateSheetPosition;
-(void)willRotate;


@end


#endif