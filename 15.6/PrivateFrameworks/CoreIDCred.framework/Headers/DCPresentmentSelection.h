// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCPRESENTMENTSELECTION_H
#define DCPRESENTMENTSELECTION_H

@class NSData, NSString, NSDictionary, NSXPCListenerEndpoint;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCPresentmentSelection : NSObject <NSSecureCoding>



@property (retain) NSData *authData; // ivar: _authData
@property (retain) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (retain) NSDictionary *elementsToPresent; // ivar: _elementsToPresent
@property (retain) NSXPCListenerEndpoint *seAccessEndpoint; // ivar: _seAccessEndpoint


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialIdentifier:(id)arg0 elementsToPresent:(id)arg1 authData:(id)arg2 seAccessEndpoint:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif