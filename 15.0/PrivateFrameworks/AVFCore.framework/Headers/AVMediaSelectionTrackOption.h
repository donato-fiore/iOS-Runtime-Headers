// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMEDIASELECTIONTRACKOPTION_H
#define AVMEDIASELECTIONTRACKOPTION_H

@class NSDictionary;


#import "AVMediaSelectionOption.h"
#import "AVAssetTrack.h"
#import "AVWeakReference.h"

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
    id *_groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}




-(BOOL)displaysNonForcedSubtitles;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPlayable;
-(NSUInteger)hash;
-(id)_groupID;
-(id)_track;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg0 ;
-(id)availableMetadataFormats;
-(id)commonMetadata;
-(id)dictionary;
-(id)group;
-(id)initWithAsset:(id)arg0 group:(id)arg1 dictionary:(id)arg2 ;
-(id)locale;
-(id)mediaSubTypes;
-(id)mediaType;
-(id)metadataForFormat:(id)arg0 ;
-(id)track;
-(int)trackID;
-(void)dealloc;


@end


#endif