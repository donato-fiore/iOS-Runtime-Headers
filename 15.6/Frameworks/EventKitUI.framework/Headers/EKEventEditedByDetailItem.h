// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTEDITEDBYDETAILITEM_H
#define EKEVENTEDITEDBYDETAILITEM_H

@class UITableViewCell, NSString;
@protocol EKCellShortener;


#import "EKEventDetailItem.h"

@interface EKEventEditedByDetailItem : EKEventDetailItem <EKCellShortener>

 {
    UITableViewCell *_cell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(BOOL)hasDetailViewControllerAtIndex:(NSUInteger)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)reset;
-(void)shortenCell:(id)arg0 ;


@end


#endif