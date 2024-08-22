// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSASALBUM_H
#define MSASALBUM_H

@class NSString, NSDictionary, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSASAlbum : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) NSString *URLString; // ivar: _URLString
@property (retain, nonatomic) id *context; // ivar: _context
@property (retain, nonatomic) NSString *ctag; // ivar: _ctag
@property (retain, nonatomic) NSString *foreignCtag; // ivar: _foreignCtag
@property (nonatomic) BOOL isFamilySharedAlbum; // ivar: _isFamilySharedAlbum
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *ownerEmail; // ivar: _ownerEmail
@property (retain, nonatomic) NSString *ownerFirstName; // ivar: _ownerFirstName
@property (retain, nonatomic) NSString *ownerFullName; // ivar: _ownerFullName
@property (nonatomic) BOOL ownerIsWhitelisted; // ivar: _ownerIsWhitelisted
@property (retain, nonatomic) NSString *ownerLastName; // ivar: _ownerLastName
@property (retain, nonatomic) NSString *ownerPersonID; // ivar: _ownerPersonID
@property (retain, nonatomic) NSString *publicURLString; // ivar: _publicURLString
@property (nonatomic) int relationshipState; // ivar: _relationshipState
@property (retain, nonatomic) NSDate *subscriptionDate; // ivar: _subscriptionDate
@property (readonly, nonatomic) BOOL useForeignCtag;


+(BOOL)supportsSecureCoding;
+(id)album;
+(id)albumWithAlbum:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)metadataValueForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif