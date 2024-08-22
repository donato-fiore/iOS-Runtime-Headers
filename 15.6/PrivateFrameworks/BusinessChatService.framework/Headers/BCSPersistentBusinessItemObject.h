// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSPERSISTENTBUSINESSITEMOBJECT_H
#define BCSPERSISTENTBUSINESSITEMOBJECT_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "BCSBusinessItem.h"

@interface BCSPersistentBusinessItemObject : NSObject

@property (readonly, nonatomic) NSDate *TTLDate; // ivar: _TTLDate
@property (readonly, nonatomic) BCSBusinessItem *businessItem; // ivar: _businessItem
@property (readonly, nonatomic) NSDate *lastRetrievedDate; // ivar: _lastRetrievedDate


-(id)initWithBusinessItem:(id)arg0 lastRetrievedDate:(id)arg1 TTLDate:(id)arg2 ;


@end


#endif