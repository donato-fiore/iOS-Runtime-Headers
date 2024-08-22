// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELGENREKIND_H
#define MPMODELGENREKIND_H



#import "MPModelKind.h"
#import "MPModelAlbumKind.h"

@interface MPModelGenreKind : MPModelKind

@property (readonly, copy, nonatomic) MPModelAlbumKind *albumKind; // ivar: _albumKind


+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithAlbumKind:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)humanDescription;
-(id)initWithCoder:(id)arg0 ;
-(struct shared_ptr<mlcore::Predicate> )representedSearchScopePredicate;
-(void)applyToView:(struct shared_ptr<mlcore::LibraryView> )arg0 withContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif