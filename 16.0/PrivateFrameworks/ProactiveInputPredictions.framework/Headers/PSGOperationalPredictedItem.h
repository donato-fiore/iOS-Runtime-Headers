// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGOPERATIONALPREDICTEDITEM_H
#define PSGOPERATIONALPREDICTEDITEM_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PSGOperationalPredictedItem : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSDictionary *operationData; // ivar: _operationData
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemIdentifier:(id)arg0 value:(id)arg1 bundleIdentifier:(id)arg2 operationData:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif