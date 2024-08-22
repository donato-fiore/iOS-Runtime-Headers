// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APRESULT_H
#define APRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APResult : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *buyParams; // ivar: _buyParams
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSString *productType; // ivar: _productType


-(id)compile;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 buyParams:(id)arg1 itemIdentifier:(id)arg2 productType:(id)arg3 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif