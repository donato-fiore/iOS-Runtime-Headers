// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPLAYMUSICACTION_H
#define WFPLAYMUSICACTION_H

@class WFAction;



@interface WFPlayMusicAction : WFAction



-(BOOL)hasPlaybackArchive;
-(NSInteger)repeatMode;
-(NSInteger)shuffleMode;
-(id)localizedKeyParameterDisplayName;
-(id)mediaQueryFromMediaCollection:(id)arg0 ;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(void)finishRunningWithError:(id)arg0 ;
-(void)getContentFromInput:(id)arg0 completionHandler:(id)arg1 ;
-(void)initializeParameters;
-(void)playContent:(id)arg0 withMusicPlayer:(id)arg1 completionHandler:(id)arg2 ;
-(void)playContentViaMPCAssistant:(id)arg0 routeDescriptor:(id)arg1 ;
-(void)playContentViaMusicPlayer:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)sendPlaybackArchive:(id)arg0 orPlaybackQueue:(id)arg1 toDestination:(id)arg2 completion:(id)arg3 ;


@end


#endif