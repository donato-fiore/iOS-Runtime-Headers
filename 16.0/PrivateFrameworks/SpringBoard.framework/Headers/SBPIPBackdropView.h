// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPBACKDROPVIEW_H
#define SBPIPBACKDROPVIEW_H

@class UIView, CAFilter, NSArray, NSString;



@interface SBPIPBackdropView : UIView {
    CAFilter *_gaussianBlurFilter;
    CAFilter *_averageColorFilter;
    NSArray *_animatedLayerProperties;
}


@property (nonatomic) CGFloat backdropScale;
@property (nonatomic) CGFloat gaussianBlurRadius;
@property (copy, nonatomic) NSString *groupName;


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateFilters;
-(void)dealloc;


@end


#endif