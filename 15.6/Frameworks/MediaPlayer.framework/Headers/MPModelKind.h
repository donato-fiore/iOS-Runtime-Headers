// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELKIND_H
#define MPMODELKIND_H

@class NSString;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPModelKind.h"

@interface MPModelKind : NSObject <NSCoding, NSSecureCoding>



@property (readonly, nonatomic) NSString *humanDescription;
@property (readonly, nonatomic) MPModelKind *identityKind;
@property (readonly, nonatomic) Class modelClass; // ivar: _modelClass


+(BOOL)supportsSecureCoding;
+(id)_kindWithModelClass:(Class)arg0 cacheKey:(id)arg1 block:(id)arg2 ;
+(id)kindWithModelClass:(Class)arg0 ;
+(id)kindWithModelClass:(Class)arg0 cacheKey:(id)arg1 block:(id)arg2 ;
-(?)predicateWithBaseProperty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithModelClass:(Class)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(struct shared_ptr<mlcore::Predicate> )representedSearchScopePredicate;
-(void)applyToView:(struct shared_ptr<mlcore::LibraryView> )arg0 withContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif