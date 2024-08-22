// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTDETAILTITLECELL_H
#define EKEVENTDETAILTITLECELL_H

@class UILabel, NSMutableArray, UIView, UIButton, NSString;
@protocol UITextViewDelegate, EKEventDetailPredictedLocationCellDelegate, ConferenceCellDelegate, EKEventDetailTitleCellDelegate;


#import "EKEventDetailCell.h"
#import "EKEventDetailPredictedLocationCell.h"
#import "EKEventDetailConferenceCell.h"

@interface EKEventDetailTitleCell : EKEventDetailCell <UITextViewDelegate, EKEventDetailPredictedLocationCellDelegate, ConferenceCellDelegate>

 {
    UILabel *_titleView;
    NSMutableArray *_locationItems;
    UIView *_predictedLocationContainer;
    EKEventDetailPredictedLocationCell *_predictedLocationView;
    EKEventDetailConferenceCell *_conferenceDetailView;
    UILabel *_travelTimeView;
    NSMutableArray *_dateTimeViews;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    UIButton *_editButton;
    unsigned int _visibleItems;
    BOOL _observingLocaleChanges;
    BOOL _rejectionReasonCell;
    BOOL _hideTopCellSeparator;
    BOOL _hideBottomCellSeparator;
    int _lastPosition;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKEventDetailTitleCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification; // ivar: _hasMapItemLaunchOptionFromTimeToLeaveNotification
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfTitleLines; // ivar: _numberOfTitleLines
@property (nonatomic) BOOL showingInlineDayView; // ivar: _showingInlineDayView
@property (readonly, nonatomic) UIView *sourceViewForPopover;
@property (readonly) Class superclass;


+(id)_largeTitleFont;
+(id)_locationFont;
+(id)_titleFont;
+(void)_invalidateCachedFonts;
+(void)_registerForInvalidation;
-(BOOL)_shouldShowConferenceCell;
-(BOOL)_useLargeFonts;
-(BOOL)update;
-(CGFloat)_layoutForWidth:(CGFloat)arg0 ;
-(CGFloat)titleHeight;
-(id)_conferenceDetailView;
-(id)_dateTimeViewForLine:(NSUInteger)arg0 ;
-(id)_editButton;
-(id)_predictedLocationContainer;
-(id)_predictedLocationView;
-(id)_recurrenceView;
-(id)_statusView;
-(id)_titleView;
-(id)_travelTimeView;
-(id)initAsRejectionReasonCellWithEvent:(id)arg0 ;
-(id)initWithEvent:(id)arg0 editable:(BOOL)arg1 style:(NSInteger)arg2 ;
-(id)owningViewController;
-(void)_promptForSpanWithSourceView:(id)arg0 completionBlock:(id)arg1 ;
-(void)_saveEventWithSpan:(NSInteger)arg0 ;
-(void)_setDateTimeString:(id)arg0 line:(NSUInteger)arg1 ;
-(void)_updateSeparatorStyle;
-(void)addLocation:(id)arg0 ;
-(void)conferenceCellUpdated:(id)arg0 ;
-(void)contentSizeCategoryChanged:(id)arg0 ;
-(void)dealloc;
-(void)editButtonTapped;
-(void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg0 disambiguatedLocation:(id)arg1 ;
-(void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg0 ;
-(void)layoutForWidth:(CGFloat)arg0 position:(int)arg1 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)setColor:(id)arg0 ;
-(void)setHideBottomCellSeparator:(BOOL)arg0 ;
-(void)setHideTopCellSeparator:(BOOL)arg0 ;
-(void)setLocation:(id)arg0 ;
-(void)setPrimaryTextColor:(id)arg0 ;
-(void)setRecurrenceString:(id)arg0 ;
-(void)setStatusString:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setTravelTimeString:(id)arg0 ;


@end


#endif