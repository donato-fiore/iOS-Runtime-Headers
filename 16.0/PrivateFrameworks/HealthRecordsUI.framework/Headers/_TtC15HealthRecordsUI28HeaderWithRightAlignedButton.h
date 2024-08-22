// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15HEALTHRECORDSUI28HEADERWITHRIGHTALIGNEDBUTTON_H
#define _TTC15HEALTHRECORDSUI28HEADERWITHRIGHTALIGNEDBUTTON_H

@class UITableViewHeaderFooterView;



@interface _TtC15HealthRecordsUI28HeaderWithRightAlignedButton : UITableViewHeaderFooterView {
    ? headerLabel;
    ? button;
    ? customConstraints;
    ? headerText;
    ? buttonText;
    ? delegate;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)buttonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif