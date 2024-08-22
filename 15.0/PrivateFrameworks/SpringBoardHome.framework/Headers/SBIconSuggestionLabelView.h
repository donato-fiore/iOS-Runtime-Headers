// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONSUGGESTIONLABELVIEW_H
#define SBICONSUGGESTIONLABELVIEW_H

@class UIImageView, UIImage;
@protocol SBIconLabelView;


#import "SBIconView.h"
#import "SBIconLabelImageParameters.h"

@interface SBIconSuggestionLabelView : UIImageView <SBIconLabelView>



@property (weak, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) SBIconLabelImageParameters *imageParameters;


-(id)initWithSettings:(id)arg0 ;
-(void)updateIconLabelWithSettings:(id)arg0 imageParameters:(id)arg1 ;


@end


#endif