// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPLAYPODCASTACTION_H
#define WFPLAYPODCASTACTION_H

@class WFAction;



@interface WFPlayPodcastAction : WFAction



-(id)contentNotFoundError;
-(id)errorPlayingPodcast:(unsigned int)arg0 ;
-(id)genericPlayPodcastFailedError;
-(id)getPlaybackURLForContentItem:(id)arg0 ;
-(id)localizedKeyParameterDisplayName;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(void)playQueue:(struct _MRSystemAppPlaybackQueue *)arg0 onPlayerPath:(*void)arg1 completion:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif