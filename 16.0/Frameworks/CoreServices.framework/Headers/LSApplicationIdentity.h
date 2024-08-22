// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSAPPLICATIONIDENTITY_H
#define LSAPPLICATIONIDENTITY_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_LSEmbeddedApplicationIdentityBookmark.h"
#import "LSApplicationRecord.h"

@interface LSApplicationIdentity : NSObject <NSSecureCoding, NSCopying>

 {
    _LSEmbeddedApplicationIdentityBookmark *_identityBookmark;
}


@property (readonly, nonatomic) NSString *identityString; // ivar: _identityString
@property (readonly, nonatomic) NSUInteger personaType; // ivar: _personaType
@property (readonly, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString
@property (weak, nonatomic) LSApplicationRecord *weakRecord; // ivar: _weakRecord


+(BOOL)supportsSecureCoding;
+(Class)currentIdentityClass;
+(id)enumeratorWithOptions:(NSUInteger)arg0 ;
+(unsigned int)classVersion;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)needsMigration;
-(Class)classForCoder;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)findApplicationRecordWithError:(*id)arg0 ;
-(id)initForRecord:(id)arg0 personaWithAttributes:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 allowPlaceholder:(BOOL)arg1 personaUniqueString:(id)arg2 error:(*id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentityBookmark:(id)arg0 identityString:(id)arg1 personaUniqueString:(id)arg2 personaType:(NSUInteger)arg3 ;
-(id)initWithIdentityString:(id)arg0 ;
-(id)initWithIdentityString:(id)arg0 parsedIdentityStringDictionary:(id)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif