// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVTOKEN_H
#define CKVTOKEN_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKVToken : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger beginIndex; // ivar: _beginIndex
@property (readonly, nonatomic) NSString *cleanValue; // ivar: _cleanValue
@property (readonly, nonatomic) NSUInteger endIndex; // ivar: _endIndex
@property (readonly, nonatomic) BOOL isSignificant; // ivar: _isSignificant
@property (readonly, nonatomic) BOOL isWhitespace; // ivar: _isWhitespace
@property (readonly, nonatomic) NSArray *normalizedValues; // ivar: _normalizedValues
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToToken:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 cleanValue:(id)arg1 beginIndex:(NSUInteger)arg2 endIndex:(NSUInteger)arg3 isSignificant:(BOOL)arg4 isWhitespace:(BOOL)arg5 ;
-(id)initWithValue:(id)arg0 cleanValue:(id)arg1 beginIndex:(NSUInteger)arg2 endIndex:(NSUInteger)arg3 isSignificant:(BOOL)arg4 isWhitespace:(BOOL)arg5 normalizedValues:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif