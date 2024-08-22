// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKMODULARSMALLRINGTEMPLATEVIEW_H
#define NTKMODULARSMALLRINGTEMPLATEVIEW_H

@class UIView<NTKComplicationImageView>, CLKProgressProvider, NSNumber;


#import "NTKModularTemplateView.h"
#import "NTKColoringLabel.h"
#import "NTKColoringImageView.h"

@interface NTKModularSmallRingTemplateView : NTKModularTemplateView {
    UIView<NTKComplicationImageView> *_imageView;
    float _level;
    CLKProgressProvider *_progressProvider;
    NSNumber *_progressUpdateToken;
}


@property (retain, nonatomic) NTKColoringLabel *label; // ivar: _label
@property (retain, nonatomic) NTKColoringImageView *stateRing; // ivar: _stateRing


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
+(id)supportedTemplateClasses;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureContentSubviews;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_layoutContentView;
-(void)_refreshRingImage;
-(void)_refreshRingImageWithRing:(id)arg0 ;
-(void)_update;
-(void)_updateRingWithRingDescription:(id)arg0 ;
-(void)setIsXL:(BOOL)arg0 ;
-(void)updateRingWithProgressProvider:(id)arg0 ;


@end


#endif