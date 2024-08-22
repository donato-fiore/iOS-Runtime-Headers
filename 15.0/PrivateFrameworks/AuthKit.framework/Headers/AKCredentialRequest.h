// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKCREDENTIALREQUEST_H
#define AKCREDENTIALREQUEST_H

@class NSString, NSUUID;
@protocol AKCredentialRequestProtocol;

#import <Foundation/Foundation.h>


@interface AKCredentialRequest : NSObject <AKCredentialRequestProtocol>



@property (readonly, copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *transactionID; // ivar: _transactionID
@property (copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif