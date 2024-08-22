// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMCONCRETENAMECOMPONENTS_H
#define CRKASMCONCRETENAMECOMPONENTS_H

@class NSString;
@protocol CRKASMNameComponents;

#import <Foundation/Foundation.h>


@interface CRKASMConcreteNameComponents : NSObject <CRKASMNameComponents>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (readonly, copy, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *monogram; // ivar: _monogram
@property (readonly, copy, nonatomic) NSString *phoneticFamilyName; // ivar: _phoneticFamilyName
@property (readonly, copy, nonatomic) NSString *phoneticFullName; // ivar: _phoneticFullName
@property (readonly, copy, nonatomic) NSString *phoneticGivenName; // ivar: _phoneticGivenName
@property (readonly) Class superclass;


+(id)makeFullNameWithComponents:(id)arg0 ;
+(id)makeMonogramWithComponents:(id)arg0 ;
+(id)makeNameComponentsForPerson:(id)arg0 ;
+(id)makePhoneticFullNameWithComponents:(id)arg0 ;
+(id)sharedFormatter;
// +(id)stringFromNameComponents:(id)arg0 configurationBlock:(id)arg1 cleanupBlock:(unk)arg2  ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithPerson:(id)arg0 ;


@end


#endif