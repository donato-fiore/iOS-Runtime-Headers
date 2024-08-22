// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTTITLEDETAILITEM_H
#define EKEVENTTITLEDETAILITEM_H

@class UIColor, NSDate, UIView;
@protocol EKEventDetailTitleCellDelegate, EKEventTitleDetailItemDelegate;


#import "EKEventDetailItem.h"
#import "EKEventDetailTitleCell.h"

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate>

 {
    EKEventDetailTitleCell *_cell;
    UIColor *_color;
    BOOL _showDot;
    BOOL _cellNeedsUpdate;
}


@property (weak, nonatomic) NSObject<EKEventTitleDetailItemDelegate> *editDelegate; // ivar: _editDelegate
@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification; // ivar: _hasMapItemLaunchOptionFromTimeToLeaveNotification
@property (nonatomic) BOOL hidesBottomSeparator; // ivar: _hidesBottomSeparator
@property (nonatomic) BOOL hidesTopSeparator; // ivar: _hidesTopSeparator
@property (nonatomic) NSUInteger numberOfTitleLines; // ivar: _numberOfTitleLines
@property (retain, nonatomic) NSDate *proposedTime; // ivar: _proposedTime
@property (readonly, nonatomic) UIView *sourceViewForPopover;


-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(BOOL)minimalMode;
-(BOOL)shouldShowEditButtonInline;
-(BOOL)showsDetectedConferenceItem;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(CGFloat)titleHeight;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)owningViewController;
-(void)_updateCellIfNeededForWidth:(CGFloat)arg0 ;
-(void)editButtonPressed;
-(void)predictionWasActedOn;
-(void)refreshCopiedEvents;
-(void)refreshForHeightChange;
-(void)reset;
-(void)setCellPosition:(int)arg0 ;


@end


#endif