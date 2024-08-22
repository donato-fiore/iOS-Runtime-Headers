// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSPERSONNAMECOMPONENTSDATA_H
#define _NSPERSONNAMECOMPONENTSDATA_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSPersonNameComponents.h"

@interface _NSPersonNameComponentsData : NSObject <NSCopying, NSSecureCoding>



@property (copy) NSString *familyName; // ivar: _familyName
@property (copy) NSString *givenName; // ivar: _givenName
@property (copy) NSString *middleName; // ivar: _middleName
@property (copy) NSString *namePrefix; // ivar: _namePrefix
@property (copy) NSString *nameSuffix; // ivar: _nameSuffix
@property (copy) NSString *nickname; // ivar: _nickname
@property (copy) NSPersonNameComponents *phoneticRepresentation; // ivar: _phoneticRepresentation


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif