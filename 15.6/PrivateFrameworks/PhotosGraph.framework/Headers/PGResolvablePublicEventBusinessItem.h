// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGRESOLVABLEPUBLICEVENTBUSINESSITEM_H
#define PGRESOLVABLEPUBLICEVENTBUSINESSITEM_H


#import <Foundation/Foundation.h>

#import "PGConsolidatedAddress.h"
#import "PGGraphPublicEventNode.h"

@interface PGResolvablePublicEventBusinessItem : NSObject

@property (readonly, nonatomic) NSUInteger businessItemMuid; // ivar: _businessItemMuid
@property (readonly, nonatomic) PGConsolidatedAddress *consolidatedAddress; // ivar: _consolidatedAddress
@property (readonly, nonatomic) PGGraphPublicEventNode *publicEventNode; // ivar: _publicEventNode


-(id)initWithPublicEventNode:(id)arg0 consolidatedAddress:(id)arg1 businessItemMuid:(NSUInteger)arg2 ;


@end


#endif