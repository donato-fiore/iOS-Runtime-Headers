// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSJSREQUEST_H
#define VSJSREQUEST_H

@class IKJSObject, NSString, NSArray;
@protocol VSJSRequest, NSCopying;



@interface VSJSRequest : IKJSObject <VSJSRequest, NSCopying>



@property (copy, nonatomic) NSString *appleVerificationToken; // ivar: _appleVerificationToken
@property (copy, nonatomic) NSArray *attributeNames; // ivar: _attributeNames
@property (copy, nonatomic) NSString *currentAuthentication; // ivar: _currentAuthentication
@property (copy, nonatomic) NSString *requestBody; // ivar: _requestBody
@property (copy, nonatomic) NSString *requestType; // ivar: _requestType
@property (copy, nonatomic) NSString *requestorVerificationToken; // ivar: _requestorVerificationToken


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif