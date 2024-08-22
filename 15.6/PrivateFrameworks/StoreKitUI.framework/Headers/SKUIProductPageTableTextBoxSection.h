// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPRODUCTPAGETABLETEXTBOXSECTION_H
#define SKUIPRODUCTPAGETABLETEXTBOXSECTION_H

@class NSString;


#import "SKUIProductPageTableSection.h"
#import "SKUIClientContext.h"
#import "SKUIColorScheme.h"
#import "SKUILayoutCache.h"

@interface SKUIProductPageTableTextBoxSection : SKUIProductPageTableSection {
    SKUIClientContext *_clientContext;
    BOOL _isExpanded;
}


@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (nonatomic) NSInteger stringIndex; // ivar: _stringIndex
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) SKUILayoutCache *textLayoutCache; // ivar: _textLayoutCache
@property (copy, nonatomic) NSString *title; // ivar: _title


-(CGFloat)heightForCellInTableView:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)numberOfRowsInSection;
-(id)initWithClientContext:(id)arg0 ;
-(id)selectionActionForTableView:(id)arg0 indexPath:(id)arg1 ;
-(id)tableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;


@end


#endif