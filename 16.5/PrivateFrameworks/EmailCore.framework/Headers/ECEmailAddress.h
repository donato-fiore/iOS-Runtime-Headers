// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECEMAILADDRESS_H
#define ECEMAILADDRESS_H

@class NSString, NSArray;
@protocol ECEmailAddressConvertible, EFPubliclyDescribable, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ECEmailAddressComponents.h"
#import "ECEmailAddress.h"

@interface ECEmailAddress : NSObject <ECEmailAddressConvertible, EFPubliclyDescribable, NSSecureCoding>

 {
    NSUInteger _hash;
}


@property (readonly, copy, nonatomic) ECEmailAddressComponents *components; // ivar: _components
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *domain;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, nonatomic) ECEmailAddress *emailAddressValue;
@property (readonly, copy) NSArray *groupList; // ivar: _groupList
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *idnaAddress;
@property (readonly, copy) NSString *localPart;
@property (readonly, copy) NSString *simpleAddress;
@property (readonly) NSString *stringValue;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_cachedEmailAddressForString:(id)arg0 generator:(id)arg1 ;
+(id)emailAddressWithString:(id)arg0 ;
+(id)emailAddressesFromStrings:(id)arg0 invalidAddresses:(*id)arg1 ;
-(BOOL)_createComponentsFrom:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)_initWithComponents:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif