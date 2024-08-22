// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKSPECIALPLAYERINTERNAL_H
#define GKSPECIALPLAYERINTERNAL_H



#import "GKPlayerInternal.h"

@interface GKSpecialPlayerInternal : GKPlayerInternal



+(BOOL)supportsSecureCoding;
-(BOOL)isLoaded;
-(id)alias;
-(id)compositeName;
-(id)gamePlayerID;
-(id)photos;
-(id)playerID;
-(id)teamPlayerID;
-(void)setAlias:(id)arg0 ;
-(void)setGamePlayerID:(id)arg0 ;
-(void)setPhotos:(id)arg0 ;
-(void)setPlayerID:(id)arg0 ;
-(void)setTeamPlayerID:(id)arg0 ;


@end


#endif