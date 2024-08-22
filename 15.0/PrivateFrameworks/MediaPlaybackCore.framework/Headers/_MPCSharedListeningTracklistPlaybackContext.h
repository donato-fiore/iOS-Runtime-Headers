// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCSHAREDLISTENINGTRACKLISTPLAYBACKCONTEXT_H
#define _MPCSHAREDLISTENINGTRACKLISTPLAYBACKCONTEXT_H

@class MPPlaybackContext, NSIndexPath, MSVSectionedCollection;



@interface _MPCSharedListeningTracklistPlaybackContext : MPPlaybackContext

@property (retain, nonatomic) NSIndexPath *startItemIndexPath; // ivar: _startItemIndexPath
@property (retain, nonatomic) MSVSectionedCollection *tracklist; // ivar: _tracklist


-(id)getSharedListeningTracklistWithCompletion:(id)arg0 ;


@end


#endif