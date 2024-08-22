// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMACCOUNTTEMPLATESCONTEXTCHANGEITEM_H
#define REMACCOUNTTEMPLATESCONTEXTCHANGEITEM_H


#import <Foundation/Foundation.h>

#import "REMAccountChangeItem.h"
#import "REMManualOrdering.h"

@interface REMAccountTemplatesContextChangeItem : NSObject

@property (retain, nonatomic) REMAccountChangeItem *accountChangeItem; // ivar: _accountChangeItem
@property (readonly, nonatomic) REMManualOrdering *unsavedManualOrdering;


-(id)addTemplateWithName:(id)arg0 configuration:(id)arg1 ;
-(id)initWithAccountChangeItem:(id)arg0 ;
-(void)updateManualOrdering:(id)arg0 ;


@end


#endif