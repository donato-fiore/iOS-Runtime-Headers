// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSURLTOKEN_H
#define APSURLTOKEN_H

@class NSData, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface APSURLToken : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSData *token; // ivar: _token
@property (retain, nonatomic) NSString *tokenURL; // ivar: _tokenURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTokenURL:(id)arg0 token:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif