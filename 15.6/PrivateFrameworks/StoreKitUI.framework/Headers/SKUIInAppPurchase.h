// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIINAPPPURCHASE_H
#define SKUIINAPPPURCHASE_H

@class NSMutableDictionary, NSString;
@protocol SKUICacheCoding;

#import <Foundation/Foundation.h>


@interface SKUIInAppPurchase : NSObject <SKUICacheCoding>



@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *formattedPrice; // ivar: _formattedPrice
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithInAppPurchaseDictionary:(id)arg0 ;


@end


#endif