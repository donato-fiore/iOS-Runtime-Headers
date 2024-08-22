// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELPLAYEVENT_H
#define MPMODELPLAYEVENT_H

@class NSDate, NSString;


#import "MPModelObject.h"
#import "MPModelAlbum.h"
#import "MPModelArtist.h"
#import "MPModelGroup.h"
#import "MPModelPlaylist.h"
#import "MPModelRadioStation.h"

@interface MPModelPlayEvent : MPModelObject

@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelArtist *artist;
@property (copy, nonatomic) NSDate *datePlayed;
@property (copy, nonatomic) NSString *featureName;
@property (retain, nonatomic) MPModelGroup *group;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (readonly, copy, nonatomic) NSString *title;


+(id)playEventWithModelObject:(id)arg0 featureName:(id)arg1 ;
-(NSInteger)itemType;
-(id)contentItemCollectionInfo;
-(id)genericObjectRepresentation;


@end


#endif