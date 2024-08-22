// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTDETAILATTENDEESCELL_H
#define EKEVENTDETAILATTENDEESCELL_H

@class UILabel, UIImageView, NSLayoutConstraint, NSArray, UIViewController;
@protocol EKEventDetailAttendeeCellDelegate;


#import "EKEventDetailCell.h"
#import "EKEventDetailAttendeesListView.h"

@interface EKEventDetailAttendeesCell : EKEventDetailCell {
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIImageView *_disclosure;
    NSLayoutConstraint *_listHeight;
    EKEventDetailAttendeesListView *_attendeesListView;
    NSArray *_cachedAttendeesWithoutOrganizerAndLocations;
}


@property (weak) NSObject<EKEventDetailAttendeeCellDelegate> *attendeeCellDelegate; // ivar: _attendeeCellDelegate
@property (weak) UIViewController *viewController; // ivar: _viewController


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)update;
-(CGFloat)displayHeight;
-(CGFloat)footerInset;
-(CGFloat)headerInset;
-(CGFloat)listToTitle;
-(id)_attendeesListView;
-(id)_attendeesWithoutOrganizerAndLocations;
-(id)initWithEvent:(id)arg0 editable:(BOOL)arg1 ;
-(void)_attendeesDidFinishLoadingForTest;
-(void)_setAttendees:(id)arg0 ;
-(void)layoutForWidth:(CGFloat)arg0 position:(int)arg1 ;


@end


#endif