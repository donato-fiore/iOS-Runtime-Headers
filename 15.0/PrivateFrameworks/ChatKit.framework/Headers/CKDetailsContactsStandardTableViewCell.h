// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDETAILSCONTACTSSTANDARDTABLEVIEWCELL_H
#define CKDETAILSCONTACTSSTANDARDTABLEVIEWCELL_H

@class NSMutableArray;


#import "CKDetailsContactsTableViewCell.h"

@interface CKDetailsContactsStandardTableViewCell : CKDetailsContactsTableViewCell

@property (retain, nonatomic) NSMutableArray *visibleButtons; // ivar: _visibleButtons


+(CGFloat)estimatedHeight;
+(CGFloat)preferredHeight;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_hideAllButtons;
-(void)_updateVisibleButtons;
-(void)layoutSubviews;
-(void)setShowsLocation:(BOOL)arg0 ;
-(void)setShowsTUConversationStatus:(BOOL)arg0 ;


@end


#endif