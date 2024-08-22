// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMEDIASELECTIONGROUP_H
#define AVMEDIASELECTIONGROUP_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVMediaSelectionGroupInternal.h"
#import "AVMediaSelectionOption.h"

@interface AVMediaSelectionGroup : NSObject <NSCopying>

 {
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}


@property (readonly, nonatomic) BOOL allowsEmptySelection;
@property (readonly, nonatomic) AVMediaSelectionOption *defaultOption;
@property (readonly, nonatomic) NSArray *options;


+(id)mediaSelectionGroupWithAsset:(id)arg0 dictionary:(id)arg1 ;
+(id)mediaSelectionOptionsFromArray:(id)arg0 filteredAndSortedAccordingToPreferredLanguages:(id)arg1 ;
+(id)mediaSelectionOptionsFromArray:(id)arg0 withLocale:(id)arg1 ;
+(id)mediaSelectionOptionsFromArray:(id)arg0 withMediaCharacteristics:(id)arg1 ;
+(id)mediaSelectionOptionsFromArray:(id)arg0 withoutMediaCharacteristics:(id)arg1 ;
+(id)playableMediaSelectionOptionsFromArray:(id)arg0 ;
-(BOOL)_isStreamingGroup;
-(BOOL)_matchesGroupID:(id)arg0 mediaType:(id)arg1 ;
-(id)_groupID;
-(id)_groupMediaCharacteristics;
-(id)_groupMediaType;
-(id)_optionWithID:(id)arg0 displaysNonForcedSubtitles:(BOOL)arg1 ;
-(id)_primaryMediaCharacteristic;
-(id)_weakReference;
-(id)asset;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentBundleIdentifier;
-(id)description;
-(id)dictionary;
-(id)init;
-(id)mediaSelectionOptionWithPropertyList:(id)arg0 ;
-(void)dealloc;
-(void)setCurrentBundleIdentifier:(id)arg0 ;


@end


#endif