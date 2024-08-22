// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETEGROUPEXPANSIONTABLEVIEWCELL_H
#define CNAUTOCOMPLETEGROUPEXPANSIONTABLEVIEWCELL_H



#import "CNComposeRecipientTableViewCell.h"

@interface CNAutocompleteGroupExpansionTableViewCell : CNComposeRecipientTableViewCell



+(id)identifier;
-(BOOL)canCollapseRecipient;
-(BOOL)canExpandRecipient;
-(CGFloat)leadingInsetsFromCurrentMargins:(struct NSDirectionalEdgeInsets )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif