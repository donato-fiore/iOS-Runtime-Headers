// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FACIRCLECONTEXT_H
#define FACIRCLECONTEXT_H

@class NSDictionary, AKAppleIDAuthenticationContext, NSString, NSData, NSURL;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FACircleContext : NSObject <NSCoding, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *additionalParameters; // ivar: _additionalParameters
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authContext; // ivar: _authContext
@property (copy, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (copy, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, copy, nonatomic) NSString *eventType; // ivar: _eventType
@property (copy, nonatomic) NSString *urlEndpoint; // ivar: _urlEndpoint
@property (copy, nonatomic) NSURL *urlForContext; // ivar: _urlForContext


+(BOOL)supportsSecureCoding;
+(id)contextWithData:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif