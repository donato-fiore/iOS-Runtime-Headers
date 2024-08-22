// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSRECIPIENT_H
#define _PSRECIPIENT_H

@class CNContact, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSRecipient : NSObject <NSSecureCoding>



@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL familyHeuristic; // ivar: _familyHeuristic
@property (copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (copy, nonatomic) NSString *handle; // ivar: _handle
@property (copy, nonatomic) NSString *handleString; // ivar: _handleString
@property NSInteger handleType; // ivar: _handleType
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *mostRecentTransportBundleId; // ivar: _mostRecentTransportBundleId
@property (nonatomic) BOOL photosInference; // ivar: _photosInference
@property (copy, nonatomic) NSString *senderHandle; // ivar: _senderHandle


+(BOOL)supportsSecureCoding;
+(id)recipientForINPerson:(id)arg0 contactResolver:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 handle:(id)arg1 contact:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 handle:(id)arg1 contact:(id)arg2 mostRecentTransportBundleId:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 handle:(id)arg1 displayName:(id)arg2 contact:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 senderHandle:(id)arg1 handle:(id)arg2 displayName:(id)arg3 contact:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 senderHandle:(id)arg1 handle:(id)arg2 displayName:(id)arg3 contact:(id)arg4 mostRecentTransportBundleId:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif