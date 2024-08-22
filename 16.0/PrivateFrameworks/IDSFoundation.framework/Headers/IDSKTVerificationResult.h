// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSKTVERIFICATIONRESULT_H
#define IDSKTVERIFICATIONRESULT_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSKTVerificationResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *endpointTransparencyStates; // ivar: _endpointTransparencyStates
@property (nonatomic) BOOL optedIn; // ivar: _optedIn
@property (retain, nonatomic) NSArray *unverifiedPushTokens; // ivar: _unverifiedPushTokens
@property (retain, nonatomic) NSString *uri; // ivar: _uri
@property (retain, nonatomic) NSArray *verifiedPushTokens; // ivar: _verifiedPushTokens


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif