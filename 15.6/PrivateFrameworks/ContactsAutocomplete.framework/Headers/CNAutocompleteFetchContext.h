// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETEFETCHCONTEXT_H
#define CNAUTOCOMPLETEFETCHCONTEXT_H

@class NSArray, NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNAutocompleteFetchContext : NSObject <NSCopying, NSSecureCoding>



@property (copy) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (copy) NSDate *date; // ivar: _date
@property (copy) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (copy) NSString *locationUUID; // ivar: _locationUUID
@property (copy) NSArray *otherAddressesAlreadyChosen; // ivar: _otherAddressesAlreadyChosen
@property BOOL predictsBasedOnOutgoingInteraction; // ivar: _predictsBasedOnOutgoingInteraction
@property (copy) NSArray *relatedContacts; // ivar: _relatedContacts
@property (copy) NSString *sendingAddress; // ivar: _sendingAddress
@property (copy) NSString *sendingAddressAccountIdentifier; // ivar: _sendingAddressAccountIdentifier
@property (copy) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid:(*id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif