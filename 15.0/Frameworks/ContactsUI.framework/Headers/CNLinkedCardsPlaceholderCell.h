// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNLINKEDCARDSPLACEHOLDERCELL_H
#define CNLINKEDCARDSPLACEHOLDERCELL_H

@protocol CNPropertyCellDelegate;


#import "CNPropertyPlaceholderCell.h"

@interface CNLinkedCardsPlaceholderCell : CNPropertyPlaceholderCell

@property (weak, nonatomic) NSObject<CNPropertyCellDelegate> *delegate; // ivar: _delegate


-(void)performDefaultAction;


@end


#endif