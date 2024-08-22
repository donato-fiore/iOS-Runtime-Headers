// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTURLDETAILITEM_H
#define EKEVENTURLDETAILITEM_H

@class UITableViewCell, SGSuggestedEventLaunchInfo, NSURL;


#import "EKEventDetailItem.h"

@interface EKEventURLDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    SGSuggestedEventLaunchInfo *_launchInfo;
    NSURL *_url;
}




+(Class)_SGSuggestionsServiceClass;
-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(BOOL)hasDetailViewControllerAtIndex:(NSUInteger)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)reset;


@end


#endif