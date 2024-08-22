// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC22_GROUPACTIVITIES_UIKIT22GROUPINTERACTIONBUTTON_H
#define _TTC22_GROUPACTIVITIES_UIKIT22GROUPINTERACTIONBUTTON_H

@class UIView, UIColor;



@interface _TtC22_GroupActivities_UIKit22GroupInteractionButton : UIView {
    ? presentationContextProvider;
    ? listContentProvider;
    ? numberOfActiveParticipants;
    ? button;
}


@property (nonatomic, retain) UIColor *tintColor;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)buttonTapped:(id)arg0 ;


@end


#endif