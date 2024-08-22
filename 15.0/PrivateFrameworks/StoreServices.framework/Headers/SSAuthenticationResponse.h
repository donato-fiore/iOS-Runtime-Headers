// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSAUTHENTICATIONRESPONSE_H
#define SSAUTHENTICATIONRESPONSE_H

@class NSHTTPURLResponse, NSString, NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface SSAuthenticationResponse : NSObject {
    NSHTTPURLResponse *_urlResponse;
}


@property NSInteger URLBagType; // ivar: _urlBagType
@property (readonly) NSHTTPURLResponse *URLResponse;
@property (readonly) NSInteger accountKind;
@property (readonly) NSString *accountName;
@property (readonly) NSNumber *accountUniqueIdentifier;
@property (readonly) NSInteger availableServiceTypes;
@property (readonly) NSString *creditsString;
@property (readonly) NSInteger enabledServiceTypes;
@property (readonly) NSNumber *failureType;
@property (readonly, getter=isManagedStudent) BOOL managedStudent;
@property (readonly, getter=isNewCustomer) BOOL newCustomer;
@property (readonly) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly) NSInteger responseType;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly) NSString *token;
@property (readonly) NSString *userMessage;


-(NSInteger)_responseTypeForErrorNumber:(NSInteger)arg0 ;
-(NSInteger)_responseTypeForFailureType:(NSInteger)arg0 ;
-(NSInteger)_responseTypeForStatusValue:(NSInteger)arg0 ;
-(id)_valueForFirstAvailableKey:(id)arg0 ;
-(id)altDSID;
-(id)initWithURLResponse:(id)arg0 dictionary:(id)arg1 ;
-(id)newAccount;


@end


#endif