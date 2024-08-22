// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI34MESSAGEWITHACTIONTILEVIEWWITHIMAGE_H
#define _TTC18HEALTHEXPERIENCEUI34MESSAGEWITHACTIONTILEVIEWWITHIMAGE_H

@class UIView;



@interface _TtC18HealthExperienceUI34MessageWithActionTileViewWithImage : UIView {
    ? baseIdentifier;
    ? messageTileView;
    ? imageView;
    ? messageTileViewTopConstraint;
    ? messageTileViewLeadingConstraint;
    ? imageViewLeadingConstraint;
    ? configuration;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif