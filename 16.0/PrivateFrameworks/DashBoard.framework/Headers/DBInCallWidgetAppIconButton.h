// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBINCALLWIDGETAPPICONBUTTON_H
#define DBINCALLWIDGETAPPICONBUTTON_H

@class UIButton, NSString;



@interface DBInCallWidgetAppIconButton : UIButton

@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif