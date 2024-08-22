// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFCREDENTIAL_H
#define _SFCREDENTIAL_H

@class NSArray, NSString, NSData, NSDate, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_SFServiceIdentifier.h"

@interface _SFCredential : NSObject <NSSecureCoding, NSCopying>

 {
    NSArray *_supplementaryServiceIdentifiers;
    int _keyclass;
    NSString *_accessGroup;
    NSData *_changeToken;
}


@property (retain, nonatomic, getter=_accessGroup, setter=_setAccessGroup:) NSString *accessGroup;
@property (retain, nonatomic, getter=_changeToken, setter=_setChangeToken:) NSData *changeToken;
@property (copy, nonatomic, setter=_setCreationDate:) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSDictionary *customAttributes; // ivar: _customAttributes
@property (nonatomic, getter=_keyclass, setter=_setKeyclass:) int keyclass;
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _description
@property (copy, nonatomic) NSString *localizedLabel; // ivar: _label
@property (copy, nonatomic, setter=_setModificationDate:) NSDate *modificationDate; // ivar: _modificationDate
@property (copy, nonatomic, setter=_setPersistentIdentifier:) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (retain, nonatomic) _SFServiceIdentifier *primaryServiceIdentifier; // ivar: _primaryServiceIdentifier
@property (retain, nonatomic) NSArray *supplementaryServiceIdentifiers;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithPrimaryServiceIdentifier:(id)arg0 supplementaryServiceIdentiifers:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif