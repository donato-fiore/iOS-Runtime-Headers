// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNDEFERREDLOCALIZEDSTRING_H
#define LNDEFERREDLOCALIZEDSTRING_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNDeferredLocalizedString : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *arguments; // ivar: _arguments
@property (readonly, copy, nonatomic) NSString *localizedKey; // ivar: _localizedKey


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedKey:(id)arg0 arguments:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif