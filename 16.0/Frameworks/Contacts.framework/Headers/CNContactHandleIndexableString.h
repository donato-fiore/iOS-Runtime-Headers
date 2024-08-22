// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTHANDLEINDEXABLESTRING_H
#define CNCONTACTHANDLEINDEXABLESTRING_H

@class NSString;
@protocol NSCopying, NSSecureCoding, _CNContactHandleStringEquivalenceStrategy;

#import <Foundation/Foundation.h>


@interface CNContactHandleIndexableString : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSObject<_CNContactHandleStringEquivalenceStrategy> *equivalenceStrategy; // ivar: _equivalenceStrategy
@property (readonly, copy, nonatomic) NSString *indexKey; // ivar: _indexKey
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue


+(BOOL)supportsSecureCoding;
+(id)emailIndexKey:(id)arg0 ;
+(id)equivalenceStrategyWithString:(id)arg0 ;
+(id)phoneNumberIndexKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToString:(id)arg0 strict:(*BOOL)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFullString:(id)arg0 indexKey:(id)arg1 equivalenceStrategy:(id)arg2 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif