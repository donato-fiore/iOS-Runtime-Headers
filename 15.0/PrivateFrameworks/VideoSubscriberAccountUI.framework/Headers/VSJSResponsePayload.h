// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSJSRESPONSEPAYLOAD_H
#define VSJSRESPONSEPAYLOAD_H

@class IKJSObject, NSString, NSArray, NSNumber, NSDate;
@protocol VSJSResponsePayload, NSCopying;



@interface VSJSResponsePayload : IKJSObject <VSJSResponsePayload, NSCopying>



@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (copy, nonatomic) NSString *authN; // ivar: _authN
@property (copy, nonatomic) NSString *authenticationScheme; // ivar: _authenticationScheme
@property (copy, nonatomic) NSArray *clearSubscriptions; // ivar: _clearSubscriptions
@property (copy, nonatomic) NSNumber *expectedAction; // ivar: _expectedAction
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSString *logout; // ivar: _logout
@property (copy, nonatomic) NSString *statusCode; // ivar: _statusCode
@property (copy, nonatomic) NSArray *subscriptions; // ivar: _subscriptions
@property (copy, nonatomic) NSArray *userChannelList; // ivar: _userChannelList
@property (copy, nonatomic) NSString *userMetadata; // ivar: _userMetadata
@property (copy, nonatomic) NSString *username; // ivar: _username


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif