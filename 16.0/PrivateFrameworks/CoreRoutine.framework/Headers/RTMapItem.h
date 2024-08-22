// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTMAPITEM_H
#define RTMAPITEM_H

@class NSDate, NSString, NSData, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RTAddress.h"
#import "RTMapItemExtendedAttributes.h"
#import "RTLocation.h"

@interface RTMapItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) RTAddress *address; // ivar: _address
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSString *displayLanguage; // ivar: _displayLanguage
@property (readonly, nonatomic) BOOL disputed; // ivar: _disputed
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) RTMapItemExtendedAttributes *extendedAttributes; // ivar: _extendedAttributes
@property (readonly, nonatomic) NSData *geoMapItemHandle; // ivar: _geoMapItemHandle
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) RTLocation *location; // ivar: _location
@property (readonly, nonatomic) NSUInteger muid; // ivar: _muid
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger resultProviderID; // ivar: _resultProviderID
@property (nonatomic) NSUInteger source; // ivar: _source
@property (readonly, nonatomic) CGFloat weight; // ivar: _weight


+(BOOL)hasKnownTypeItem:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(CGFloat)weightForExtendedAttributes:(id)arg0 ;
+(CGFloat)weightForSource:(NSUInteger)arg0 ;
+(id)sourceToString:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMapItem:(id)arg0 ;
-(BOOL)validMUID;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 address:(id)arg2 location:(id)arg3 source:(NSUInteger)arg4 muid:(NSUInteger)arg5 resultProviderID:(NSInteger)arg6 geoMapItemHandle:(id)arg7 creationDate:(id)arg8 expirationDate:(id)arg9 extendedAttributes:(id)arg10 displayLanguage:(id)arg11 disputed:(BOOL)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWeightWithSource:(NSUInteger)arg0 extendedAttributes:(id)arg1 ;


@end


#endif