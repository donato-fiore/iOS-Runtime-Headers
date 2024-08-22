// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIAVAILABILITYPARTICIPANTLIST_H
#define EKUIAVAILABILITYPARTICIPANTLIST_H

@class UIScrollView, NSMutableArray;



@interface EKUIAvailabilityParticipantList : UIScrollView {
    CGFloat _scrollOffset;
    CGFloat _rowHeight;
    NSMutableArray *_containers;
}




+(CGFloat)listWidthForCompact:(BOOL)arg0 ;
-(id)initWithParticipants:(id)arg0 viewController:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBusyParticipants:(id)arg0 ;
-(void)setRowHeight:(CGFloat)arg0 ;
-(void)setVerticalScrollOffset:(CGFloat)arg0 ;


@end


#endif