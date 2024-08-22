// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELKIND_H
#define MPMODELKIND_H

@class NSString;
@protocol NSCopying, NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPModelKind.h"

@interface MPModelKind : NSObject <NSCopying, NSCoding, NSSecureCoding>



@property (readonly, nonatomic) NSString *humanDescription;
@property (readonly, nonatomic) MPModelKind *identityKind;
@property (readonly, nonatomic) Class modelClass; // ivar: _modelClass


+(BOOL)supportsSecureCoding;
+(id)_kindWithModelClass:(Class)arg0 cacheKey:(id)arg1 block:(id)arg2 ;
+(id)kindWithModelClass:(Class)arg0 ;
+(id)kindWithModelClass:(Class)arg0 cacheKey:(id)arg1 block:(id)arg2 ;
+(id)unknownKind;
-(?)representedSearchScopePredicate;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithModelClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct shared_ptr<mlcore::Predicate> )predicateWithBaseProperty:(*void)arg0 ;
-(void)applyToView:(struct shared_ptr<mlcore::LibraryView> )arg0 withContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif