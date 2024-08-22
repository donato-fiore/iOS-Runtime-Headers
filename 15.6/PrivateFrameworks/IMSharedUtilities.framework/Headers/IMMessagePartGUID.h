// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMESSAGEPARTGUID_H
#define IMMESSAGEPARTGUID_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IMMessagePartGUID : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *encodedMessagePartGUID; // ivar: _encodedMessagePartGUID
@property (readonly, copy, nonatomic) NSString *messageGUID; // ivar: _messageGUID
@property (readonly, nonatomic) _NSRange messageGUIDRange;
@property (readonly, nonatomic) NSUInteger partNumber; // ivar: _partNumber
@property (readonly, nonatomic) _NSRange partNumberRange;
@property (readonly, copy, nonatomic) NSString *prefix; // ivar: _prefix
@property (readonly, nonatomic) _NSRange prefixRange;
@property (readonly, nonatomic) IMMessagePartRanges ranges; // ivar: _ranges


+(BOOL)supportsSecureCoding;
+(id)encodeMessagePartGUID:(id)arg0 prefix:(id)arg1 ;
+(id)encodeMessagePartGUID:(id)arg0 prefix:(id)arg1 partNumber:(NSUInteger)arg2 ;
-(BOOL)decodeRangesWithEncodedGuid:(id)arg0 ranges:(struct IMMessagePartRanges *)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncodedMessagePartGUID:(id)arg0 ;
-(id)initWithEncodedMessagePartGUID:(id)arg0 messageGUID:(id)arg1 prefix:(id)arg2 partNumber:(NSUInteger)arg3 ranges:(struct IMMessagePartRanges )arg4 ;
-(id)initWithMessageGUID:(id)arg0 prefix:(id)arg1 ;
-(id)initWithMessageGUID:(id)arg0 prefix:(id)arg1 partNumber:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif