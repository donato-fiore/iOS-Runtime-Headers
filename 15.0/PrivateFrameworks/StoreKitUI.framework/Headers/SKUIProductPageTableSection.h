// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPRODUCTPAGETABLESECTION_H
#define SKUIPRODUCTPAGETABLESECTION_H



#import "SKUITableViewSection.h"
#import "SKUIClientContext.h"

@interface SKUIProductPageTableSection : SKUITableViewSection

@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded


-(CGFloat)heightForTextLayout:(id)arg0 isExpanded:(BOOL)arg1 ;
-(id)selectionActionForTableView:(id)arg0 indexPath:(id)arg1 ;
-(id)textBoxTableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;


@end


#endif