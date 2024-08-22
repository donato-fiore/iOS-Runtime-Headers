// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSCUSTOMATTRIBUTEKEY_H
#define CSCUSTOMATTRIBUTEKEY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CSCustomAttributeKey : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSString *keyName; // ivar: _keyName
@property (getter=isMultiValued) BOOL multiValued; // ivar: _multiValued
@property (getter=isSearchable) BOOL searchable; // ivar: _searchable
@property (getter=isSearchableByDefault) BOOL searchableByDefault; // ivar: _searchableByDefault
@property (getter=isUnique) BOOL unique; // ivar: _unique


+(BOOL)_keyNameIsValid:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyName:(id)arg0 ;
-(id)initWithKeyName:(id)arg0 searchable:(BOOL)arg1 searchableByDefault:(BOOL)arg2 unique:(BOOL)arg3 multiValued:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif