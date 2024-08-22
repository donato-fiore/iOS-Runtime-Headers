// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CRSEARCHCOLLECTIONPREDICATE_H
#define _CRSEARCHCOLLECTIONPREDICATE_H

@class NSArray, NSString;


#import "CRSearchPredicate.h"

@interface _CRSearchCollectionPredicate : CRSearchPredicate

@property (readonly, copy) NSArray *collection; // ivar: _collection
@property (readonly, copy) NSString *key; // ivar: _key


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asNSPredicate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 collection:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif