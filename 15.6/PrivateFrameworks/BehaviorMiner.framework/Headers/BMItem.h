// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMITEM_H
#define BMITEM_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BMItemType.h"

@interface BMItem : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger absoluteSupport; // ivar: _absoluteSupport
@property (readonly, copy, nonatomic) NSString *normalizedValue; // ivar: _normalizedValue
@property (readonly, nonatomic) BMItemType *type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *uniformIdentifier;
@property (readonly, copy, nonatomic) id *value;


+(BOOL)supportsSecureCoding;
+(id)itemWithType:(id)arg0 UUIDValue:(id)arg1 ;
+(id)itemWithType:(id)arg0 numberValue:(id)arg1 ;
+(id)itemWithType:(id)arg0 stringValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 normalizedValue:(id)arg1 ;
-(id)initWithType:(id)arg0 value:(id)arg1 ;
-(id)initWithType:(id)arg0 value:(id)arg1 absoluteSupport:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif