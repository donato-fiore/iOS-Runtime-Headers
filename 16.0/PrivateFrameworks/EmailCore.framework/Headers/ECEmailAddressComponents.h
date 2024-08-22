// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECEMAILADDRESSCOMPONENTS_H
#define ECEMAILADDRESSCOMPONENTS_H

@class NSString, NSArray;
@protocol ECEmailAddressConvertible, EFPubliclyDescribable, NSCopying;

#import <Foundation/Foundation.h>

#import "ECEmailAddress.h"

@interface ECEmailAddressComponents : NSObject <ECEmailAddressConvertible, EFPubliclyDescribable, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *displayName; // ivar: _displayName
@property (copy) NSString *domain; // ivar: _domain
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) ECEmailAddress *emailAddressValue;
@property (copy) NSArray *groupList; // ivar: _groupList
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *idnaAddress;
@property (copy, setter=setIDNADomain:) NSString *idnaDomain; // ivar: _idnaDomain
@property (copy) NSString *localPart; // ivar: _localPart
@property (readonly) NSString *simpleAddress; // ivar: _simpleAddress
@property (readonly) NSString *stringValue;
@property (readonly) Class superclass;


+(id)componentsWithEmailAddress:(id)arg0 ;
+(id)componentsWithString:(id)arg0 ;
-(BOOL)_nts_getValidatedDomain:(*id)arg0 idnaDomain:(*id)arg1 avoidReparse:(BOOL)arg2 ;
-(BOOL)_nts_getValidatedLocalPart:(*id)arg0 domain:(*id)arg1 idnaDomain:(*id)arg2 displayName:(*id)arg3 ;
-(BOOL)_nts_isValid;
-(BOOL)_nts_isValidDomain;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithString:(id)arg0 displayName:(id)arg1 localPart:(id)arg2 domain:(id)arg3 groupList:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithEmailAddress:(id)arg0 ;
-(id)initWithString:(id)arg0 ;


@end


#endif