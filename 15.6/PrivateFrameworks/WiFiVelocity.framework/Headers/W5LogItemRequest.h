// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef W5LOGITEMREQUEST_H
#define W5LOGITEMREQUEST_H

@class NSDictionary, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5LogItemRequest : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (nonatomic) NSInteger itemID; // ivar: _itemID
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)requestWithItemID:(NSInteger)arg0 configuration:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLogItemRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif