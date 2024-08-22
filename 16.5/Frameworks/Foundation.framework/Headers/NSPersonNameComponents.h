// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPERSONNAMECOMPONENTS_H
#define NSPERSONNAMECOMPONENTS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSPersonNameComponents.h"

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding>

 {
    id *_private;
}


@property (copy) NSString *familyName;
@property (copy) NSString *givenName;
@property (copy) NSString *middleName;
@property (copy) NSString *namePrefix;
@property (copy) NSString *nameSuffix;
@property (copy) NSString *nickname;
@property (copy) NSPersonNameComponents *phoneticRepresentation;


+(BOOL)supportsSecureCoding;
+(id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(BOOL)arg0 ;
+(id)_allComponents;
+(id)_allProperties;
-(BOOL)_isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToComponents:(id)arg0 ;
-(NSUInteger)hash;
-(id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif