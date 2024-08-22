// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTORGANIZERDETAILITEM_H
#define EKEVENTORGANIZERDETAILITEM_H

@class UITableViewCell;
@protocol EKIdentityProtocol;


#import "EKEventDetailItem.h"

@interface EKEventOrganizerDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
}


@property (nonatomic) BOOL hideDisclosureIndicator; // ivar: _hideDisclosureIndicator
@property (retain) NSObject<EKIdentityProtocol> *organizerOverride; // ivar: _organizerOverride


-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)_updateDisclosureIndicator;
-(void)reset;


@end


#endif