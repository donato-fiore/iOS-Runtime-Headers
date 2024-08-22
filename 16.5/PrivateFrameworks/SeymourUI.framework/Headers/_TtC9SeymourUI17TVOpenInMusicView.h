// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI17TVOPENINMUSICVIEW_H
#define _TTC9SEYMOURUI17TVOPENINMUSICVIEW_H

@class UICollectionReusableView;



@interface _TtC9SeymourUI17TVOpenInMusicView : UICollectionReusableView {
    ? delegate;
    ? shelf;
    ? button;
    ? indexPath;
    ? focusGuide;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)openInMusicPressed:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif