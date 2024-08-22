// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTTEXTDETAILITEM_H
#define EKEVENTTEXTDETAILITEM_H

@class UITableViewCell;
@protocol EKEventDetailTextCellDelegate;


#import "EKEventDetailItem.h"

@interface EKEventTextDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    UITableViewCell *_moreButtonCell;
    BOOL _cellNeedsUpdate;
}


@property (weak, nonatomic) NSObject<EKEventDetailTextCellDelegate> *textDelegate; // ivar: _textDelegate


+(id)moreButtonLabel;
+(id)textFromEventBlock:(SEL)arg0 ;
+(id)titleForCell;
+(id)titleForExtendedViewController;
-(BOOL)hasDetailViewControllerAtIndex:(NSUInteger)arg0 ;
-(BOOL)requiresLayoutForSubitemCount;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(NSUInteger)maximumNumberOfSubItems;
-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)textForCopyAction;
-(id)textForExtendedViewController;
-(void)_updateCellIfNeeded;
-(void)reset;
-(void)setCellPosition:(int)arg0 ;


@end


#endif