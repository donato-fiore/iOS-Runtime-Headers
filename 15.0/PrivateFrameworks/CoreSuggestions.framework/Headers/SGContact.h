// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGCONTACT_H
#define SGCONTACT_H

@class _PASCachedResult, NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SGDateComponents.h"
#import "SGName.h"
#import "SGRecordId.h"

@interface SGContact : NSObject <NSCopying, NSSecureCoding>

 {
    _PASCachedResult *_cachedDetailForRecordIdMap;
}


@property (copy, nonatomic) SGDateComponents *birthday; // ivar: _birthday
@property (copy, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (copy, nonatomic) SGName *name; // ivar: _name
@property (copy, nonatomic) NSArray *phones; // ivar: _phones
@property (readonly, copy, nonatomic) NSString *photoPath; // ivar: _photoPath
@property (copy, nonatomic) NSArray *postalAddresses; // ivar: _postalAddresses
@property (readonly, nonatomic) SGRecordId *recordId; // ivar: _recordId
@property (nonatomic) NSUInteger significance; // ivar: _significance
@property (nonatomic) NSUInteger significanceOrigin; // ivar: _significanceOrigin
@property (copy, nonatomic) NSArray *socialProfiles; // ivar: _socialProfiles
@property (nonatomic) int updatedFields; // ivar: _updatedFields


+(BOOL)supportsSecureCoding;
+(id)contactWithId:(id)arg0 name:(id)arg1 emailAddresses:(id)arg2 phones:(id)arg3 postalAddresses:(id)arg4 ;
+(id)contactWithId:(id)arg0 name:(id)arg1 emailAddresses:(id)arg2 phones:(id)arg3 postalAddresses:(id)arg4 socialProfiles:(id)arg5 ;
+(id)contactWithId:(id)arg0 name:(id)arg1 emailAddresses:(id)arg2 phones:(id)arg3 postalAddresses:(id)arg4 socialProfiles:(id)arg5 birthday:(id)arg6 photoPath:(id)arg7 ;
-(BOOL)containsDetailSuggestions;
-(BOOL)containsSuggestions;
-(BOOL)hasNonTrivialInfo;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContact:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)richness;
-(id)addresses;
-(id)cnContact;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)detailForRecordId:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithId:(id)arg0 name:(id)arg1 emailAddresses:(id)arg2 phones:(id)arg3 postalAddresses:(id)arg4 socialProfiles:(id)arg5 birthday:(id)arg6 photoPath:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateDetailsWithBlock:(id)arg0 ;


@end


#endif