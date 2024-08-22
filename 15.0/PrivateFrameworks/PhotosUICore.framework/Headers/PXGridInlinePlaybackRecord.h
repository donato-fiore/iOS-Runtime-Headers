// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGRIDINLINEPLAYBACKRECORD_H
#define PXGRIDINLINEPLAYBACKRECORD_H

@class NSString;
@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>

#import "PXMediaProvider.h"

@interface PXGridInlinePlaybackRecord : NSObject

@property (readonly, nonatomic) ? bestVideoTimeRange; // ivar: _bestVideoTimeRange
@property (nonatomic) CGFloat cellSizeScore; // ivar: _cellSizeScore
@property (readonly, nonatomic) float curationScore; // ivar: _curationScore
@property (nonatomic) NSInteger desiredPlayState; // ivar: _desiredPlayState
@property (copy) NSString *diagnosticLog; // ivar: _diagnosticLog
@property (readonly, copy) NSString *diagnosticScoresDescription;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *displayAsset; // ivar: _displayAsset
@property (nonatomic) CGFloat distanceToCenterScore; // ivar: _distanceToCenterScore
@property (readonly, nonatomic) id *geometryReference; // ivar: _geometryReference
@property (nonatomic) BOOL isInvalid; // ivar: _isInvalid
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) float videoScore; // ivar: _videoScore
@property (nonatomic) NSInteger visibilityScore; // ivar: _visibilityScore


-(id)description;
-(id)initWithDisplayAsset:(id)arg0 mediaProvider:(id)arg1 geometryReference:(id)arg2 ;
-(void)prepareForInvisible;
-(void)prepareForVisible;


@end


#endif