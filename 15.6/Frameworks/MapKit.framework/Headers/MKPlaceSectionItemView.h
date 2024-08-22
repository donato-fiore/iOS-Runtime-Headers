// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACESECTIONITEMVIEW_H
#define MKPLACESECTIONITEMVIEW_H



#import "MKViewWithHairline.h"

@interface MKPlaceSectionItemView : MKViewWithHairline

@property (nonatomic, getter=isHairlineFullWidth) BOOL fullWidthHairline; // ivar: _fullWidthHairline


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateHairlineInsets;
-(void)didMoveToWindow;
-(void)infoCardThemeChanged;
-(void)layoutMarginsDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif