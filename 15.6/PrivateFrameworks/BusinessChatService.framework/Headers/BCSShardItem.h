// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSSHARDITEM_H
#define BCSSHARDITEM_H

@class NSString, NSDate;
@protocol BCSShardItemProtocol, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCSShardItem : NSObject <BCSShardItemProtocol, NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *base64EncodedString; // ivar: _base64EncodedString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger shardCount; // ivar: _shardCount
@property (nonatomic) NSInteger startIndex; // ivar: _startIndex
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBase64EncodedString:(id)arg0 shardType:(NSInteger)arg1 startIndex:(NSInteger)arg2 shardCount:(NSInteger)arg3 expirationDate:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif