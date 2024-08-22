// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICHANDWRITINGDEBUGWINDOW_H
#define ICHANDWRITINGDEBUGWINDOW_H

@class UIWindow, UIView;
@protocol ICHandwritingDebugDelegate;



@interface ICHandwritingDebugWindow : UIWindow

@property (nonatomic, getter=isDraggingWindow) BOOL draggingWindow; // ivar: _draggingWindow
@property (weak, nonatomic) NSObject<ICHandwritingDebugDelegate> *handwritingDebugDelegate;
@property (nonatomic) CGPoint initialTouchLocation; // ivar: _initialTouchLocation
@property (retain, nonatomic) UIView *resizeTriangle; // ivar: _resizeTriangle
@property (nonatomic, getter=isResizingWindow) BOOL resizingWindow; // ivar: _resizingWindow


+(struct CGRect )preferredFrame;
+(void)savePreferredFrame:(struct CGRect )arg0 ;
-(id)handwritingDebugViewController;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)navigationController;
-(void)layoutSubviews;
-(void)refresh;
-(void)sharedInit;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateResizeTriangleFrame;


@end


#endif