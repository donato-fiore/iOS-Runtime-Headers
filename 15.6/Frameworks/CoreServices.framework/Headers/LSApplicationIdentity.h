// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSAPPLICATIONIDENTITY_H
#define LSAPPLICATIONIDENTITY_H

@class NSData, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LSApplicationRecord.h"

@interface LSApplicationIdentity : NSObject <NSSecureCoding, NSCopying>

 {
    NSData *_identityBookmark;
}


@property (readonly, nonatomic) NSString *identityString; // ivar: _identityString
@property (readonly, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString
@property (weak, nonatomic) LSApplicationRecord *weakRecord; // ivar: _weakRecord


+(BOOL)supportsSecureCoding;
+(id)enumeratorWithOptions:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)findApplicationRecordWithError:(*id)arg0 ;
-(id)initForRecord:(id)arg0 personaUniqueString:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentityBookmark:(id)arg0 identityString:(id)arg1 personaUniqueString:(id)arg2 ;
-(id)initWithIdentityString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif