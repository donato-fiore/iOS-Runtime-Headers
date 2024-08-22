// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUILIBRARYITEM_H
#define SKUILIBRARYITEM_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SKUIStoreIdentifier.h"

@interface SKUILibraryItem : NSObject <NSCopying>



@property (copy, nonatomic) NSString *storeFlavorIdentifier; // ivar: _storeFlavorIdentifier
@property (copy, nonatomic) SKUIStoreIdentifier *storeIdentifier; // ivar: _storeIdentifier
@property (readonly, nonatomic) NSNumber *storeItemIdentifier;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif