// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLIBRARYAUTHSERVICECLIENTTOKENRESULT_H
#define ICLIBRARYAUTHSERVICECLIENTTOKENRESULT_H

@class NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICLibraryAuthServiceClientTokenIdentifier.h"

@interface ICLibraryAuthServiceClientTokenResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSInteger generatedAtMillis; // ivar: _generatedAtMillis
@property (readonly, nonatomic) BOOL isExpired;
@property (readonly, nonatomic) NSInteger lifespanMillis; // ivar: _lifespanMillis
@property (readonly, nonatomic) NSInteger timeToLiveMillis; // ivar: _timeToLiveMillis
@property (readonly, copy, nonatomic) NSString *token; // ivar: _token
@property (readonly, copy, nonatomic) ICLibraryAuthServiceClientTokenIdentifier *tokenIdentitifer; // ivar: _tokenIdentitifer


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif