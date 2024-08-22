// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPRAWSEARCHRESULT_H
#define SPRAWSEARCHRESULT_H

@class NSData, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPRawSearchResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *hashedPublicKey; // ivar: _hashedPublicKey
@property (readonly, nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, copy, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHashedPublicKey:(id)arg0 publicKey:(id)arg1 status:(NSInteger)arg2 timestamp:(id)arg3 latitude:(CGFloat)arg4 longitude:(CGFloat)arg5 horizontalAccuracy:(CGFloat)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif