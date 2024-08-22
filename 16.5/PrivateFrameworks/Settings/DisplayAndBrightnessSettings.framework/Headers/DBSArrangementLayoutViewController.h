// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSARRANGEMENTLAYOUTVIEWCONTROLLER_H
#define DBSARRANGEMENTLAYOUTVIEWCONTROLLER_H

@class UIViewController, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, DBSArrangementLayoutViewControllerDelegate;


#import "DBSArrangementLayoutView.h"
#import "DBSNativeDisplayIconView.h"

@interface DBSArrangementLayoutViewController : UIViewController <UIGestureRecognizerDelegate>



@property (readonly, nonatomic) DBSArrangementLayoutView *arrangementView;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<DBSArrangementLayoutViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIPanGestureRecognizer *dragGestureRecognizer; // ivar: _dragGestureRecognizer
@property (retain, nonatomic) DBSNativeDisplayIconView *dragView; // ivar: _dragView
@property (retain, nonatomic) NSString *externalDisplayName; // ivar: _externalDisplayName
@property (nonatomic) CGSize externalDisplaySize; // ivar: _externalDisplaySize
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger nativeDisplayLocation; // ivar: _nativeDisplayLocation
@property (retain, nonatomic) NSString *nativeDisplayName; // ivar: _nativeDisplayName
@property (nonatomic) CGSize nativeDisplaySize; // ivar: _nativeDisplaySize
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecogniser; // ivar: _tapGestureRecogniser
@property (nonatomic) CGPoint unitDragPoint; // ivar: _unitDragPoint


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)currentDisplayIconView;
-(id)initWithNativeDisplaySize:(struct CGSize )arg0 nativeDisplayName:(id)arg1 externalDisplaySize:(struct CGSize )arg2 externalDisplayName:(id)arg3 currentNativeDisplayLocation:(NSUInteger)arg4 ;
-(id)nativeDisplayImageWithWidth:(CGFloat)arg0 ;
-(void)didDrag:(id)arg0 ;
-(void)didTap:(id)arg0 ;
-(void)loadView;
-(void)updateOrientationTo:(NSInteger)arg0 ;


@end


#endif