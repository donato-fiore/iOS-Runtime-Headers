// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef W5LOGITEMRECEIPT_H
#define W5LOGITEMRECEIPT_H

@class NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "W5LogItemRequest.h"

@interface W5LogItemReceipt : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat completedAt; // ivar: _completedAt
@property (copy, nonatomic) NSDictionary *info; // ivar: _info
@property (copy, nonatomic) NSArray *relativeURLs; // ivar: _relativeURLs
@property (copy, nonatomic) W5LogItemRequest *request; // ivar: _request
@property (nonatomic) CGFloat startedAt; // ivar: _startedAt


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLogItemReceipt:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif