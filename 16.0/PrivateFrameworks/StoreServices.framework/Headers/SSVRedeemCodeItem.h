// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVREDEEMCODEITEM_H
#define SSVREDEEMCODEITEM_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SSVRedeemCodeItem : NSObject

@property (readonly, nonatomic) NSInteger itemIdentifier;
@property (readonly, nonatomic) NSDictionary *redeemCodeDictionary; // ivar: _dictionary


-(id)initWithLookupItem:(id)arg0 ;
-(id)initWithRedeemCodeDictionary:(id)arg0 ;


@end


#endif