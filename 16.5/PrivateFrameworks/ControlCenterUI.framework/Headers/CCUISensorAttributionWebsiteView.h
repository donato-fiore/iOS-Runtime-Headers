// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUISENSORATTRIBUTIONWEBSITEVIEW_H
#define CCUISENSORATTRIBUTIONWEBSITEVIEW_H

@class SBFView, NSString, UILabel;
@protocol UILargeContentViewerInteractionDelegate, CCUISensorAttributionViewAnimating;



@interface CCUISensorAttributionWebsiteView : SBFView <UILargeContentViewerInteractionDelegate, CCUISensorAttributionViewAnimating>



@property (nonatomic) CGRect cachedExpandedRect; // ivar: cachedExpandedRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *websiteLabel; // ivar: _websiteLabel


-(BOOL)scalesLargeContentImage;
-(BOOL)showsLargeContentViewer;
-(id)_titleLabelForSensorActivityData:(id)arg0 maxSize:(struct CGSize )arg1 ;
-(id)initWithSensorActivityData:(id)arg0 maxSize:(struct CGSize )arg1 ;
-(id)largeContentTitle;
-(void)setBlurRadius:(CGFloat)arg0 ;


@end


#endif