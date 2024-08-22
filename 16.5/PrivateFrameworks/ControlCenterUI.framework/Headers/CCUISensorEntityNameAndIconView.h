// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUISENSORENTITYNAMEANDICONVIEW_H
#define CCUISENSORENTITYNAMEANDICONVIEW_H

@class SBFView, UILabel, UIImageView;
@protocol CCUISensorAttributionViewAnimating;



@interface CCUISensorEntityNameAndIconView : SBFView <CCUISensorAttributionViewAnimating>



@property (retain, nonatomic) UILabel *appNameLabel; // ivar: _appNameLabel
@property (nonatomic) CGRect cachedExpandedRect; // ivar: cachedExpandedRect
@property (retain, nonatomic) UIImageView *entityIconView; // ivar: _entityIconView


+(CGFloat)horizontalPaddingBetweenIconAndLabel;
+(NSInteger)maximumNumberOfLines;
+(struct CGSize )iconSize;
-(BOOL)scalesLargeContentImage;
-(BOOL)showsLargeContentViewer;
-(id)_titleLabelForSensorAttributionEntity:(id)arg0 maxSize:(struct CGSize )arg1 ;
-(id)initWithSensorEntity:(id)arg0 maxSize:(struct CGSize )arg1 ;
-(id)largeContentTitle;
-(void)setBlurRadius:(CGFloat)arg0 ;


@end


#endif