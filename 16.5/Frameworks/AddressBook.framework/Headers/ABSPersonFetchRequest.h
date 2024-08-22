// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABSPERSONFETCHREQUEST_H
#define ABSPERSONFETCHREQUEST_H

@class NSArray, NSPredicate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ABSPersonFetchRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSArray *additionalKeysToFetch; // ivar: _additionalKeysToFetch
@property (readonly, copy) NSPredicate *predicate; // ivar: _predicate
@property (readonly) unsigned int sortOrder; // ivar: _sortOrder


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionOfKeysToFetch;
-(id)descriptionOfSortOrder;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 additionalKeysToFetch:(id)arg1 sortOrder:(unsigned int)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif