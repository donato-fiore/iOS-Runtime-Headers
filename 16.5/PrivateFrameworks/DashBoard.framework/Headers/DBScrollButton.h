// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSCROLLBUTTON_H
#define DBSCROLLBUTTON_H

@class UIButton, UIImage;



@interface DBScrollButton : UIButton

@property (retain, nonatomic) UIImage *scrollImage; // ivar: _scrollImage


+(id)buttonWithDirection:(NSUInteger)arg0 ;
-(BOOL)canBecomeFocused;
-(void)_updateImage;
-(void)setEnabled:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif