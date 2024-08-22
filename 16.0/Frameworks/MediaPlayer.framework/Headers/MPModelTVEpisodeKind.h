// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELTVEPISODEKIND_H
#define MPMODELTVEPISODEKIND_H



#import "MPModelKind.h"

@interface MPModelTVEpisodeKind : MPModelKind

@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSUInteger variants; // ivar: _variants


+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithVariants:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(?)representedSearchScopePredicate;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)humanDescription;
-(id)initWithCoder:(id)arg0 ;
-(struct shared_ptr<mlcore::Predicate> )predicateWithBaseProperty:(*void)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif