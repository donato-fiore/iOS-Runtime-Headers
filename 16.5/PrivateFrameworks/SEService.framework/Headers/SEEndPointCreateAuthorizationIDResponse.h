// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEENDPOINTCREATEAUTHORIZATIONIDRESPONSE_H
#define SEENDPOINTCREATEAUTHORIZATIONIDRESPONSE_H

@class NSNumber, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SEEndPointCreateAuthorizationIDResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *authorizationCount; // ivar: _authorizationCount
@property (retain, nonatomic) NSData *authorizationID; // ivar: _authorizationID
@property (retain, nonatomic) NSNumber *authorizationInterval; // ivar: _authorizationInterval


+(BOOL)supportsSecureCoding;
+(id)withAuthorizationID:(id)arg0 authorizationInterval:(CGFloat)arg1 authorizationCount:(NSUInteger)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif