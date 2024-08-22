// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIAVAILABILITYROWVIEW_H
#define EKUIAVAILABILITYROWVIEW_H

@class UIView, NSMutableArray, UIActivityIndicatorView, NSDate, EKParticipant, NSArray;



@interface EKUIAvailabilityRowView : UIView {
    NSMutableArray *_spanViews;
    UIActivityIndicatorView *_activityIndicator;
    NSDate *_startOfDay;
    NSMutableArray *_spans;
}


@property (readonly) BOOL isLoading; // ivar: _isLoading
@property (readonly) EKParticipant *participant; // ivar: _participant
@property (readonly) NSArray *spans;


+(CGFloat)cornerRadius;
+(CGFloat)padInset;
-(CGFloat)convertDateIntoOffset:(id)arg0 ;
-(id)initWithParticipant:(id)arg0 ;
-(struct CGRect )frameForSpanView:(id)arg0 ;
-(void)addToSpans:(id)arg0 ;
-(void)completedLoad;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)startLoadForDate:(id)arg0 ;
-(void)updateSpanViews;


@end


#endif