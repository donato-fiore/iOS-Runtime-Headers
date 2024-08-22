// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXSEGMENTATIONITEM_H
#define PIPARALLAXSEGMENTATIONITEM_H

@class NSArray, NUComposition, NSString, PFParallaxLayout, NSURL, NSDictionary, PFParallaxLayerStyle, PFParallaxAssetResource;
@protocol PISegmentationItem, NSCopying, PFParallaxLayoutConfiguration, PFParallaxAssetRegions, NUImageBuffer;

#import <Foundation/Foundation.h>

#import "PIParallaxColorAnalysis.h"
#import "PISegmentationContextInfo.h"

@interface PIParallaxSegmentationItem : NSObject <PISegmentationItem, NSCopying>



@property (copy, nonatomic) NSArray *_availableStyles; // ivar: __availableStyles
@property (copy, nonatomic) NSArray *_defaultStyles; // ivar: __defaultStyles
@property (readonly, copy, nonatomic) NSArray *availableStyles;
@property (nonatomic) NSUInteger classification; // ivar: _classification
@property (retain, nonatomic) PIParallaxColorAnalysis *colorAnalysis; // ivar: _colorAnalysis
@property (retain, nonatomic) NUComposition *composition; // ivar: _composition
@property (retain, nonatomic) PISegmentationContextInfo *contextInfo; // ivar: _contextInfo
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PFParallaxLayout *defaultLayout; // ivar: _defaultLayout
@property (readonly, copy, nonatomic) NSArray *defaultStyles;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) NSObject<PFParallaxLayoutConfiguration> *layoutConfiguration;
@property (nonatomic) NSUInteger loadingState; // ivar: _loadingState
@property (copy, nonatomic) NSDictionary *localLightData; // ivar: _localLightData
@property (retain, nonatomic) PFParallaxLayout *originalLayout; // ivar: _originalLayout
@property (readonly, nonatomic) PFParallaxLayerStyle *originalStyle;
@property (retain, nonatomic) NSObject<PFParallaxAssetRegions> *regions; // ivar: _regions
@property (retain, nonatomic) PFParallaxAssetResource *resource; // ivar: _resource
@property (copy, nonatomic) NSDictionary *scores; // ivar: _scores
@property (retain, nonatomic) NSObject<NUImageBuffer> *segmentationBackground; // ivar: _segmentationBackground
@property (retain, nonatomic) NSObject<NUImageBuffer> *segmentationConfidenceMap; // ivar: _segmentationConfidenceMap
@property (retain, nonatomic) NSURL *segmentationDataURL; // ivar: _segmentationDataURL
@property (retain, nonatomic) NSObject<NUImageBuffer> *segmentationMatte; // ivar: _segmentationMatte
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsManualClockIntersectionTolerance;
@property (readonly, nonatomic) NSUInteger version;


+(BOOL)writeImageBuffer:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)dataForImageBuffer:(id)arg0 error:(*id)arg1 ;
+(id)imageBufferFromData:(id)arg0 error:(*id)arg1 ;
+(id)readImageBufferFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadContentsFromDictionary:(id)arg0 hasMatte:(*BOOL)arg1 hasBackground:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)loadFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadSegmentationDataFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSegmentationDataToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveToURL:(id)arg0 error:(*id)arg1 ;
-(id)availableStyleOfKind:(id)arg0 ;
-(id)contentsDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultStyleOfKind:(id)arg0 ;
-(id)suggestedStyleForCategory:(id)arg0 ;
-(void)_populateAvailableStyles;
-(void)_populateDefaultStyles;


@end


#endif