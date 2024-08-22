// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCTAGCHECKMARKVIEW_H
#define DOCTAGCHECKMARKVIEW_H

@class UIImageView, NSLayoutConstraint, NSString, DOCTag;
@protocol DOCTagIconView;



@interface DOCTagCheckmarkView : UIImageView <DOCTagIconView>

 {
    NSLayoutConstraint *_heightConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DOCTag *itemTag; // ivar: _itemTag
@property (readonly) Class superclass;


+(id)checkmarkImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateHeightConstraint;
-(void)_updateTintColor;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif