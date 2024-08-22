// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELTVSEASONKIND_H
#define MPMODELTVSEASONKIND_H



#import "MPModelKind.h"
#import "MPModelTVEpisodeKind.h"

@interface MPModelTVSeasonKind : MPModelKind

@property (readonly, nonatomic) MPModelTVEpisodeKind *episodeKind; // ivar: _episodeKind


+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithEpisodeKind:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)humanDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)applyToView:(struct shared_ptr<mlcore::LibraryView> )arg0 withContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif