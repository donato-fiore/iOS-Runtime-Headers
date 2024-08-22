// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCLOCKUPREQUEST_H
#define ASCLOCKUPREQUEST_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ASCAdamID.h"

@interface ASCLockupRequest : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, copy, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy, nonatomic) ASCAdamID *id; // ivar: _id
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly, copy, nonatomic) NSDictionary *mediaQueryParams; // ivar: _mediaQueryParams


+(BOOL)supportsSecureCoding;
+(id)_requestWithID:(id)arg0 kind:(id)arg1 context:(id)arg2 productVariantID:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithID:(id)arg0 kind:(id)arg1 context:(id)arg2 clientID:(id)arg3 ;
-(id)_initWithID:(id)arg0 kind:(id)arg1 context:(id)arg2 minExternalVersionID:(id)arg3 latestReleaseID:(id)arg4 productVariantID:(id)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 kind:(id)arg1 context:(id)arg2 ;
-(id)lockupRequestWithClientID:(id)arg0 ;
-(id)lockupRequestWithMediaQueryParams:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif