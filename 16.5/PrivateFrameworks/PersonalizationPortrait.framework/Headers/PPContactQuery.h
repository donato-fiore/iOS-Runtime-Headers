// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONTACTQUERY_H
#define PPCONTACTQUERY_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPContactQuery : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *context; // ivar: _context
@property (nonatomic) unsigned char domain; // ivar: _domain
@property (retain, nonatomic) NSString *matchingEmail; // ivar: _matchingEmail
@property (retain, nonatomic) NSArray *matchingIdentifiers; // ivar: _matchingIdentifiers
@property (retain, nonatomic) NSString *matchingName; // ivar: _matchingName
@property (retain, nonatomic) NSString *matchingPhone; // ivar: _matchingPhone
@property (retain, nonatomic) NSString *matchingPostalAddress; // ivar: _matchingPostalAddress
@property (nonatomic) BOOL onlyQueryMostRelevantContacts; // ivar: _onlyQueryMostRelevantContacts
@property (retain, nonatomic) NSString *targetBundleIdentifier; // ivar: _targetBundleIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)hasNoConstraints;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContactQuery:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif