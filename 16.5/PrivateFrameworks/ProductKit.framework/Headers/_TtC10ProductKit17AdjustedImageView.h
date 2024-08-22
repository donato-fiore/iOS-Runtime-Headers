// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10PRODUCTKIT17ADJUSTEDIMAGEVIEW_H
#define _TTC10PRODUCTKIT17ADJUSTEDIMAGEVIEW_H

@class UIImageView;



@interface _TtC10ProductKit17AdjustedImageView : UIImageView {
    ? startedHandler;
    ? completedHandler;
    ? adjustments;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 highlightedImage:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif