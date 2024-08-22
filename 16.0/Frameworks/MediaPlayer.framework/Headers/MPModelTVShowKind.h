// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELTVSHOWKIND_H
#define MPMODELTVSHOWKIND_H



#import "MPModelKind.h"
#import "MPModelTVSeasonKind.h"

@interface MPModelTVShowKind : MPModelKind

@property (readonly, copy, nonatomic) MPModelTVSeasonKind *seasonKind; // ivar: _seasonKind


+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithSeasonKind:(id)arg0 ;
-(?)representedSearchScopePredicate;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)humanDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)applyToView:(struct shared_ptr<mlcore::LibraryView> )arg0 withContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif