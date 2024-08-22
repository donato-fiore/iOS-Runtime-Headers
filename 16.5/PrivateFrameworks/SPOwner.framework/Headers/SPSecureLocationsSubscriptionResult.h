// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPSECURELOCATIONSSUBSCRIPTIONRESULT_H
#define SPSECURELOCATIONSSUBSCRIPTIONRESULT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPSecureLocationsSubscriptionResult : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat expiresIn; // ivar: _expiresIn
@property (copy, nonatomic) NSArray *locations; // ivar: _locations


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExpiryTime:(CGFloat)arg0 locations:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif