// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKTURNBASEDPARTICIPANTSDATASOURCE_H
#define GKTURNBASEDPARTICIPANTSDATASOURCE_H

@class GKTurnBasedMatch, NSString;


#import "GKBasicCollectionViewDataSource.h"

@interface GKTurnBasedParticipantsDataSource : GKBasicCollectionViewDataSource

@property (retain, nonatomic) GKTurnBasedMatch *match; // ivar: _match
@property (readonly, nonatomic) NSString *sectionTitle;


-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(void)configureCollectionView:(id)arg0 ;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 updateNotifier:(id)arg2 ;


@end


#endif