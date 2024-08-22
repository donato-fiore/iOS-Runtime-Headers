// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSECTIONDISCLOSUREBUTTON_H
#define SFSECTIONDISCLOSUREBUTTON_H

@class UIButton, UILabel, UIImageView;



@interface SFSectionDisclosureButton : UIButton {
    UILabel *_labelWhenCollapsed;
    UILabel *_labelWhenExpanded;
    UIImageView *_imageView;
}


@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded


-(id)initWithFrame:(struct CGRect )arg0 expanded:(BOOL)arg1 ;
-(void)buttonShapesEnabledDidChange;
-(void)dealloc;
-(void)toggleExpanded;
-(void)updateExpanded;


@end


#endif