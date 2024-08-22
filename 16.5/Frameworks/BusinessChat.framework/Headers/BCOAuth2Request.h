// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCOAUTH2REQUEST_H
#define BCOAUTH2REQUEST_H

@class NSString, NSDictionary;
@protocol BCOAuth2RequestProtocol, BCBaseOAuth2Protocol;

#import <Foundation/Foundation.h>


@interface BCOAuth2Request : NSObject <BCOAuth2RequestProtocol>



@property (retain, nonatomic) NSString *businessIdentifier; // ivar: _businessIdentifier
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (retain, nonatomic) NSObject<BCBaseOAuth2Protocol> *oauth2; // ivar: _oauth2


-(id)_initWithDictionary:(id)arg0 URLProvider:(id)arg1 ;
-(id)debugDescription;


@end


#endif