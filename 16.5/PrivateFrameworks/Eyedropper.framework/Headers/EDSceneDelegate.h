// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSCENEDELEGATE_H
#define EDSCENEDELEGATE_H

@class UIResponder, NSString, UIWindow;
@protocol EDWindowTrackingDelegate, UIWindowSceneDelegate;



@interface EDSceneDelegate : UIResponder <EDWindowTrackingDelegate, UIWindowSceneDelegate>

 {
    CGFloat _touchesBeganTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(id)appDelegate;
-(id)lensView;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)trackedTouchesBegan:(id)arg0 ;
-(void)trackedTouchesCancelled:(id)arg0 ;
-(void)trackedTouchesEnded:(id)arg0 ;
-(void)trackedTouchesMoved:(id)arg0 ;


@end


#endif