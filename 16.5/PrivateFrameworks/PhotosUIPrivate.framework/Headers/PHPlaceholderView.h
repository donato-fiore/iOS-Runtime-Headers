// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPLACEHOLDERVIEW_H
#define PHPLACEHOLDERVIEW_H

@class UIView, UILabel, UIImageView;



@interface PHPlaceholderView : UIView

@property (retain, nonatomic, setter=_setAirPlayLabel:) UILabel *_airPlayLabel; // ivar: __airPlayLabel
@property (retain, nonatomic, setter=_setAppleTVMessageLabel:) UILabel *_appleTVMessageLabel; // ivar: __appleTVMessageLabel
@property (retain, nonatomic, setter=_setContainer:) UIView *_container; // ivar: __container
@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView; // ivar: __imageView
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)_appleTVMessage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)_setup;


@end


#endif