// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMACCOUNTPINNEDLISTSCONTEXTCHANGEITEM_H
#define REMACCOUNTPINNEDLISTSCONTEXTCHANGEITEM_H


#import <Foundation/Foundation.h>

#import "REMAccountChangeItem.h"
#import "REMManualOrdering.h"

@interface REMAccountPinnedListsContextChangeItem : NSObject

@property (retain, nonatomic) REMAccountChangeItem *accountChangeItem; // ivar: _accountChangeItem
@property (readonly, nonatomic) REMManualOrdering *unsavedManualOrdering;


-(id)initWithAccountChangeItem:(id)arg0 ;
-(void)updateManualOrdering:(id)arg0 ;


@end


#endif