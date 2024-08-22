// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISTOREITEMRELATIONSHIP_H
#define SKUISTOREITEMRELATIONSHIP_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "SKUIStoreIdentifier.h"

@interface SKUIStoreItemRelationship : NSObject

@property (readonly, copy, nonatomic) NSSet *chidItems; // ivar: _chidItems
@property (readonly, copy, nonatomic) SKUIStoreIdentifier *singleParent; // ivar: _singleParent


-(id)initWithParent:(id)arg0 andChildren:(id)arg1 ;


@end


#endif