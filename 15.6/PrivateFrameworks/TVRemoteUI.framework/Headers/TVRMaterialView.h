// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRMATERIALVIEW_H
#define TVRMATERIALVIEW_H

@class UIView, MTMaterialView;



@interface TVRMaterialView : UIView {
    MTMaterialView *_materialView;
}


@property (nonatomic) CGFloat weighting;


+(id)backgroundMaterialViewWithWeighting:(CGFloat)arg0 ;
+(id)seperatorMaterialView;
+(id)trackpadMaterialView;
-(id)initWithDarkMaterialView;
-(id)initWithMaterialView:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif