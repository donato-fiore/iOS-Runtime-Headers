// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMESSAGEACKNOWLEDGMENTPICKERBARVIEW_H
#define CKMESSAGEACKNOWLEDGMENTPICKERBARVIEW_H

@class UIView, CALayer, NSDictionary, NSArray, NSString;
@protocol CKPickerBarView;



@interface CKMessageAcknowledgmentPickerBarView : UIView <CKPickerBarView>

 {
    CALayer *_anchorBubble;
    CALayer *_intermediateBubble;
    UIView *_pillBubble;
    NSDictionary *_groupAcknowledgmentCounts;
    NSInteger _selectedAcknowledgment;
    char _balloonOrientation;
}


@property (copy, nonatomic) NSArray *acknowledgmentViews; // ivar: _acknowledgmentViews
@property (nonatomic) CGPoint anchorBubblePosition; // ivar: _anchorBubblePosition
@property (nonatomic) char anchorVerticalOrientation; // ivar: _anchorVerticalOrientation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasGroupCounts;
-(id)initWithGroupCounts:(id)arg0 selectedType:(NSInteger)arg1 orientation:(char)arg2 serviceName:(id)arg3 ;
-(struct CGSize )_ackViewsBoundsWidth;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)performCancelAnimation:(id)arg0 ;
-(void)performSelectedAnimation:(id)arg0 ;
-(void)performSendAnimation:(id)arg0 ;
-(void)performShowAnimation:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDynamicColorsForBubbleLayers;


@end


#endif