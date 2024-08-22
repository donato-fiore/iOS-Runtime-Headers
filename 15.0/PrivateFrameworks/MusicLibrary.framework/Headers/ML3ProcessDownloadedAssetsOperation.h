// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3PROCESSDOWNLOADEDASSETSOPERATION_H
#define ML3PROCESSDOWNLOADEDASSETSOPERATION_H



#import "ML3DatabaseOperation.h"

@interface ML3ProcessDownloadedAssetsOperation : ML3DatabaseOperation



-(BOOL)_execute:(*id)arg0 ;
-(BOOL)_processArtworkIdentifier:(id)arg0 artworkToken:(id)arg1 artworkType:(NSInteger)arg2 mediaType:(unsigned int)arg3 sourceType:(NSInteger)arg4 ;
-(BOOL)_processContainerAsset:(id)arg0 forSource:(int)arg1 withError:(*id)arg2 ;
-(BOOL)_processGeniusPlist:(id)arg0 geniusIDString:(id)arg1 geniusChecksum:(NSInteger)arg2 ;
-(BOOL)_processTrackAsset:(id)arg0 forSource:(int)arg1 withError:(*id)arg2 ;
-(CGFloat)_videoSnapshotTimeForMediaType:(unsigned int)arg0 ;
-(NSInteger)_artworkSourceFromTrackSource:(int)arg0 ;
-(NSUInteger)type;
-(id)initWithLibrary:(id)arg0 writer:(id)arg1 ;


@end


#endif