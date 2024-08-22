// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETINSPECTORLOADER_H
#define AVASSETINSPECTORLOADER_H

@class NSURL, NSArray, NSString;
@protocol NSCopying, AVAsynchronousKeyValueLoading;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading>

 {
    AVWeakReference *_weakReference;
}


@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic, getter=isAssociatedWithFragmentMinder) BOOL associatedWithFragmentMinder;
@property (readonly, nonatomic, getter=_classForTrackInspectors) Class classForTrackInspectors;
@property (readonly, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;
@property (readonly, nonatomic, getter=isComposable) BOOL composable;
@property (readonly, nonatomic) NSArray *contentKeySpecifiersEligibleForPreloading;
@property (readonly, nonatomic) NSUInteger downloadToken;
@property (readonly, nonatomic) ? duration;
@property (readonly, nonatomic, getter=isExportable) BOOL exportable;
@property (readonly, nonatomic, getter=_figAsset) *OpaqueFigAsset figAsset;
@property (readonly, nonatomic) NSArray *figChapterGroupInfo;
@property (readonly, nonatomic) NSArray *figChapters;
@property (readonly, nonatomic) NSInteger firstFragmentSequenceNumber;
@property (readonly, nonatomic, getter=_formatReader) *OpaqueFigFormatReader formatReader;
@property (readonly, nonatomic) NSInteger fragmentCount;
@property (nonatomic, getter=_fragmentMindingInterval, setter=_setFragmentMindingInterval:) CGFloat fragmentMindingInterval;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic) NSString *lyrics;
@property (readonly, nonatomic) NSURL *originalNetworkContentURL;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly, nonatomic, getter=_playbackItem) *OpaqueFigPlaybackItem playbackItem;
@property (readonly, nonatomic, getter=isReadable) BOOL readable;
@property (readonly, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic, getter=_isStreaming) BOOL streaming;
@property (readonly, nonatomic) NSArray *variants;
@property (readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference;


+(void)initialize;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)_createAVErrorForError:(id)arg0 andFigErrorCode:(int)arg1 ;
-(id)assetInspector;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg0 ;
-(void)_serverHasDied;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg0 ;
-(void)cancelLoading;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 keysForCollectionKeys:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif