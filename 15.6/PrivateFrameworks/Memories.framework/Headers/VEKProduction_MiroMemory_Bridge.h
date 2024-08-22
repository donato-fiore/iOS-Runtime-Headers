// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VEKPRODUCTION_MIROMEMORY_BRIDGE_H
#define VEKPRODUCTION_MIROMEMORY_BRIDGE_H

@class PHAsset, AVPlayerItem, NSString, NSSet;

#import <Foundation/Foundation.h>

#import "MiroAutoEditor.h"
#import "VEKBlueprint.h"
#import "MiroMemory.h"
#import "VEKProductionExport.h"
#import "VEKProgressWatcher.h"

@interface VEKProduction_MiroMemory_Bridge : NSObject

@property (retain) MiroAutoEditor *autoEditor; // ivar: _autoEditor
@property (retain, nonatomic) VEKBlueprint *blueprint; // ivar: _blueprint
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) MiroMemory *memory; // ivar: _memory
@property (nonatomic) NSUInteger nonLocalPickedAssetCount; // ivar: _nonLocalPickedAssetCount
@property (retain) AVPlayerItem *playerItem; // ivar: _playerItem
@property (retain, nonatomic) VEKProductionExport *productionExport; // ivar: _productionExport
@property (nonatomic) CGFloat requestedDuration; // ivar: _requestedDuration
@property (retain, nonatomic) NSString *songID; // ivar: _songID
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSSet *suggestions; // ivar: _suggestions
@property (retain, nonatomic) NSString *title;
@property (retain) VEKProgressWatcher *watcherProperty; // ivar: _watcherProperty


+(void)initialize;
-(CGFloat)maxDuration;
-(CGFloat)maximumDuration;
-(NSInteger)moodForMoodID:(id)arg0 ;
-(NSInteger)pickedItemCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)fudgedDurationInfo;
-(id)initWithAssetCollection:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)moodIDForMood:(NSInteger)arg0 ;
-(id)moodIDmap;
-(id)requestedMood;
// -(void)_generateProjectWithNaturalSize:(struct CGSize )arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)addAsset:(id)arg0 ;
// -(void)generateProjectWithNaturalSize:(struct CGSize )arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)removeAsset:(id)arg0 ;
-(void)removeClip:(id)arg0 ;
-(void)setRangeOfInterest:(struct ? )arg0 forClip:(id)arg1 ;
-(void)setVolume:(NSInteger)arg0 forClip:(id)arg1 ;
-(void)updateBlueprintOnMemory;
-(void)updateSuggestionsOnMemory;


@end


#endif