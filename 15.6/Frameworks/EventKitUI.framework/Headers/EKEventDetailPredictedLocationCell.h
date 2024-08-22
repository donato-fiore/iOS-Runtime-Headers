// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTDETAILPREDICTEDLOCATIONCELL_H
#define EKEVENTDETAILPREDICTEDLOCATIONCELL_H

@class UITableViewCell, EKEvent, EKStructuredLocation, UIButton, UIView;
@protocol EKEventDetailPredictedLocationCellDelegate;


#import "EKEventDetailsHighlightControl.h"

@interface EKEventDetailPredictedLocationCell : UITableViewCell {
    EKEvent *_event;
    EKStructuredLocation *_location;
    EKEventDetailsHighlightControl *_titleControl;
    UIButton *_dismissButton;
}


@property (readonly, nonatomic) UIView *acceptView;
@property (weak) NSObject<EKEventDetailPredictedLocationCellDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIView *rejectView;


+(id)_separatorColor;
-(id)init;
-(id)initEditable:(BOOL)arg0 ;
-(void)_disambiguateIfNeeded;
-(void)_setEventDate:(id)arg0 ;
-(void)confirmLocationTapped:(id)arg0 ;
-(void)rejectLocationTapped:(id)arg0 ;
-(void)setEvent:(id)arg0 ;


@end


#endif