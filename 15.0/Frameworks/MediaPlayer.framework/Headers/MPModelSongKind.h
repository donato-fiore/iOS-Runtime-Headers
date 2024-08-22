// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELSONGKIND_H
#define MPMODELSONGKIND_H



#import "MPModelKind.h"

@interface MPModelSongKind : MPModelKind

@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSUInteger variants; // ivar: _variants


+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithVariants:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(?)predicateWithBaseProperty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)humanDescription;
-(id)initWithCoder:(id)arg0 ;
-(struct shared_ptr<mlcore::Predicate> )representedSearchScopePredicate;
-(void)applyToView:(struct shared_ptr<mlcore::LibraryView> )arg0 withContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif