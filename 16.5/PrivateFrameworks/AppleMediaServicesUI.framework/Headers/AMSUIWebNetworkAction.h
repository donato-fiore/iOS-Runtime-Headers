// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBNETWORKACTION_H
#define AMSUIWEBNETWORKACTION_H

@class NSURL, ACAccount, NSString, NSDictionary;


#import "AMSUIWebAction.h"

@interface AMSUIWebNetworkAction : AMSUIWebAction

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) NSString *gsTokenIdentifier; // ivar: _gsTokenIdentifier
@property (retain, nonatomic) NSDictionary *headers; // ivar: _headers
@property (nonatomic) BOOL includeAuthKitTokens; // ivar: _includeAuthKitTokens
@property (nonatomic) BOOL includeiCloudTokens; // ivar: _includeiCloudTokens
@property (retain, nonatomic) NSString *method; // ivar: _method
@property (nonatomic) BOOL requiresCellularAccess; // ivar: _requiresCellularAccess
@property (retain, nonatomic) NSString *signatureData; // ivar: _signatureData
@property (nonatomic) BOOL usePrimaryKeychain; // ivar: _usePrimaryKeychain


-(id)_createSession;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif