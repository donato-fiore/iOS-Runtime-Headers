// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIIKPLAYLISTELEMENTTOMEDIAITEMSMAPPER_H
#define VUIIKPLAYLISTELEMENTTOMEDIAITEMSMAPPER_H


#import <Foundation/Foundation.h>


@interface VUIIKPlaylistElementToMediaItemsMapper : NSObject

@property (nonatomic) NSUInteger resumeMenuBehavior; // ivar: _resumeMenuBehavior


-(BOOL)_shouldDisableResumeMenuForAsset:(id)arg0 ;
-(id)_clipMediaItemsMediaItem:(id)arg0 fromTimelineElement:(id)arg1 ;
-(id)_storeAuxMediaItemForIKMediaElement:(id)arg0 isExtrasContent:(BOOL)arg1 ;
-(id)_storeMediaItemsForAdamID:(NSInteger)arg0 IKMediaElement:(id)arg1 ;
-(id)init;
-(id)playlistForIKMediaElements:(id)arg0 isExtrasContent:(BOOL)arg1 ;
-(void)_populateMediaItem:(id)arg0 withMetadatafromRelatedContentElement:(id)arg1 ;
-(void)_populateMediaItem:(id)arg0 withMetadatafromTimelineEventElement:(id)arg1 ;
-(void)_populateMediaItem:(id)arg0 withMetadatafromVideoElement:(id)arg1 ;


@end


#endif