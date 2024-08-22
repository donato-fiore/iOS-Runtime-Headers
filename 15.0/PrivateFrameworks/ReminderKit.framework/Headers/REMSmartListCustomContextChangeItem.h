// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMSMARTLISTCUSTOMCONTEXTCHANGEITEM_H
#define REMSMARTLISTCUSTOMCONTEXTCHANGEITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "REMListBadge.h"
#import "REMColor.h"
#import "REMSmartListChangeItem.h"

@interface REMSmartListCustomContextChangeItem : NSObject

@property (copy, nonatomic) REMListBadge *badge;
@property (copy, nonatomic) REMColor *color;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REMSmartListChangeItem *smartListChangeItem; // ivar: _smartListChangeItem


-(id)initWithSmartListChangeItem:(id)arg0 ;


@end


#endif