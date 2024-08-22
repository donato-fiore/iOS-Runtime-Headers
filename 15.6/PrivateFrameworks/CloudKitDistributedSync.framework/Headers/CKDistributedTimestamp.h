// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDISTRIBUTEDTIMESTAMP_H
#define CKDISTRIBUTEDTIMESTAMP_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKDistributedSiteIdentifier.h"

@interface CKDistributedTimestamp : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger clockValue; // ivar: _clockValue
@property (readonly, nonatomic) unsigned char modifier;
@property (readonly, nonatomic) NSData *siteIdentifier;
@property (readonly, nonatomic) CKDistributedSiteIdentifier *siteIdentifierObject; // ivar: _siteIdentifierObject
@property (readonly, nonatomic) BOOL unordered;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareToTimestamp:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithStringSiteIdentifiers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSiteIdentifier:(id)arg0 clockValue:(NSUInteger)arg1 ;
-(id)initWithSiteIdentifier:(id)arg0 clockValue:(NSUInteger)arg1 modifier:(unsigned char)arg2 unordered:(BOOL)arg3 ;
-(id)initWithSiteIdentifierObject:(id)arg0 clockValue:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif