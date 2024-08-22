// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCOMPOSITION_H
#define AVCOMPOSITION_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding, NSMutableCopying;


#import "AVAsset.h"
#import "AVCompositionInternal.h"

@interface AVComposition : AVAsset <NSSecureCoding, NSMutableCopying>

 {
    AVCompositionInternal *_priv;
}


@property (readonly, copy, nonatomic) NSDictionary *URLAssetInitializationOptions;
@property (readonly, nonatomic) CGSize naturalSize;
@property (readonly, nonatomic) NSArray *tracks;


+(BOOL)expectsPropertyRevisedNotifications;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)_clientProvidesNaturalSize;
-(Class)_classForTrackInspectors;
-(id)_assetInspector;
-(id)_assetInspectorLoader;
-(id)_initWithComposition:(id)arg0 ;
-(id)_mediaSelectionGroupDictionaries;
-(id)_mutableTracks;
-(id)_newTrackForIndex:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)trackWithTrackID:(int)arg0 ;
-(id)tracksWithMediaCharacteristic:(id)arg0 ;
-(id)tracksWithMediaType:(id)arg0 ;
-(int)_createEmptyMutableCompositionIfNeeded;
-(struct OpaqueFigAsset *)_figAsset;
-(struct OpaqueFigFormatReader *)_formatReader;
-(struct OpaqueFigMutableComposition *)_mutableComposition;
-(void)_loadAssetInspectorAndLoaderOnce;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif