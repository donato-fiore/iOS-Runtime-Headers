// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSTATUSBARSCREENRESIZEBUTTON_H
#define DBSTATUSBARSCREENRESIZEBUTTON_H



#import "DBStatusBarButton.h"

@interface DBStatusBarScreenResizeButton : DBStatusBarButton

@property (nonatomic) NSUInteger transitionControlType; // ivar: _transitionControlType


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBackgroundColor;
-(void)_updateImage;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif