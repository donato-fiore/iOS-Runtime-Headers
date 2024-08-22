// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETMEDIASELECTIONGROUP_H
#define AVASSETMEDIASELECTIONGROUP_H

@class NSDictionary, NSArray;


#import "AVMediaSelectionGroup.h"
#import "AVAsset.h"
#import "AVMediaSelectionOption.h"

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_groupMediaCharacteristics;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    BOOL _isStreamingGroup;
}




-(BOOL)_isStreamingGroup;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_groupMediaCharacteristics;
-(id)_optionWithID:(id)arg0 displaysNonForcedSubtitles:(BOOL)arg1 ;
-(id)_optionWithID:(id)arg0 identifier:(id)arg1 source:(id)arg2 displaysNonForcedSubtitles:(BOOL)arg3 ;
-(id)asset;
-(id)defaultOption;
-(id)dictionary;
-(id)init;
-(id)initWithAsset:(id)arg0 dictionary:(id)arg1 ;
-(id)mediaSelectionOptionWithPropertyList:(id)arg0 ;
-(id)options;
-(void)dealloc;


@end


#endif