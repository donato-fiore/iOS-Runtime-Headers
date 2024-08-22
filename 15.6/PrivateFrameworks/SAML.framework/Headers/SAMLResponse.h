// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMLRESPONSE_H
#define SAMLRESPONSE_H

@class NSDictionary, NSString;


#import "XMLWrapperDoc.h"
#import "SAMLResponseElement.h"

@interface SAMLResponse : XMLWrapperDoc

@property (readonly, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) SAMLResponseElement *responseElement; // ivar: _responseElement
@property (readonly, nonatomic) NSString *selectedProvider;


-(BOOL)assertionMeetsConditions:(*id)arg0 ;
-(BOOL)hasValidAuthentication;
-(BOOL)isValid:(*id)arg0 ;
-(NSInteger)expectedAction;
-(id)assertions;
-(id)attributeValuesForName:(id)arg0 ;
-(id)authenticationSessionId;
-(id)authenticationTTL;
-(id)authorizationStatusForResource:(id)arg0 ;
-(id)initWithData:(id)arg0 schema:(id)arg1 error:(*id)arg2 ;
-(id)primaryStatusCode;
-(id)statusCodes;
-(id)subject;
-(id)userName;
-(void)setAuthenticationTTL:(id)arg0 ;


@end


#endif