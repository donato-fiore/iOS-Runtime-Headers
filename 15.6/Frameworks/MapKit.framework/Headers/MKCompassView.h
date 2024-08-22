// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKCOMPASSVIEW_H
#define MKCOMPASSVIEW_H

@class UIView, UIImageView, NSArray, NSString;
@protocol MKCompassView;



@interface MKCompassView : UIView <MKCompassView>

 {
    UIImageView *_containerImageView;
    UIImageView *_assetImageView;
    NSArray *_compassPointLocalizedAbbreviations;
    int _lastDrawnCompassDirection;
}


@property (readonly, nonatomic) NSInteger compassViewSize; // ivar: _compassViewSize
@property (readonly, nonatomic) NSInteger compassViewStyle; // ivar: _compassViewStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat mapHeading;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat yaw;


+(id)_parameterForSize:(NSInteger)arg0 ;
+(id)_parameterForStyle:(NSInteger)arg0 ;
-(BOOL)isPointInNorthEastHalf:(struct CGPoint )arg0 ;
-(id)_compassDirectionImageForKey:(id)arg0 sizeParams:(id)arg1 styleParams:(id)arg2 scale:(CGFloat)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)stringForCompassPoint:(int)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_adaptCompassStyleToUserInterfaceStyle;
-(void)_commonInit;
-(void)_populateCompassPointLocalizedAbbreviationsArray;
-(void)_setupImageView:(id)arg0 ;
-(void)_updateImageForCompassDirection:(int)arg0 ;
-(void)_updateLayerForCurrentSizeAndStyle;
-(void)_updateStyle;
-(void)dealloc;
-(void)layoutSubviews;
-(void)movedToWindow:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLocale:(id)arg0 ;


@end


#endif