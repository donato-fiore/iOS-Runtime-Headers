// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDETAILSCONTACTSLARGETEXTTABLEVIEWCELL_H
#define CKDETAILSCONTACTSLARGETEXTTABLEVIEWCELL_H

@class NSLayoutConstraint;


#import "CKDetailsContactsTableViewCell.h"

@interface CKDetailsContactsLargeTextTableViewCell : CKDetailsContactsTableViewCell

@property (retain, nonatomic) NSLayoutConstraint *buttonsTopConstraint; // ivar: _buttonsTopConstraint


+(CGFloat)estimatedHeight;
+(CGFloat)preferredHeight;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_hideAllButtons;
-(void)_initConstraints;
-(void)_updateVisibleButtons;
-(void)configureWithViewModel:(id)arg0 ;
-(void)setShowsLocation:(BOOL)arg0 ;
-(void)setShowsTUConversationStatus:(BOOL)arg0 ;


@end


#endif