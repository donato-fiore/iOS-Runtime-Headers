// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMEXTRACTEDTHUMBNAILCONTAINERVIEW_H
#define ICDOCCAMEXTRACTEDTHUMBNAILCONTAINERVIEW_H

@class UIView;
@protocol ICDocCamExtractedThumbnailContainerViewDelegate;



@interface ICDocCamExtractedThumbnailContainerView : UIView

@property (weak, nonatomic) NSObject<ICDocCamExtractedThumbnailContainerViewDelegate> *delegate; // ivar: _delegate


-(BOOL)isAccessibilityElement;
-(BOOL)orderNextForAccessibility:(id)arg0 ;
-(BOOL)orderPreviousForAccessibility:(id)arg0 ;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityCustomActions;
-(id)accessibilityElements;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;


@end


#endif