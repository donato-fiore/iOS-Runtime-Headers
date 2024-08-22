// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKMONOGRAMCIRCULARSMALLCOMPLICATIONVIEW_H
#define NTKMONOGRAMCIRCULARSMALLCOMPLICATIONVIEW_H

@class CLKUIColoringLabel, NSString;
@protocol NTKMonogramComplicationDisplay, CDComplicationDisplayObserver;


#import "NTKCircularComplicationView.h"

@interface NTKMonogramCircularSmallComplicationView : NTKCircularComplicationView <NTKMonogramComplicationDisplay>

 {
    CLKUIColoringLabel *_label;
}


@property (nonatomic) BOOL canUseCurvedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CDComplicationDisplayObserver> *displayObserver;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateLabelsForFontChange;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg0 ;
-(void)setMonogramText:(id)arg0 ;


@end


#endif