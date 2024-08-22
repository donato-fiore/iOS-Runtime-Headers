// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKPRESENTATIONGUIDELINE_H
#define OKPRESENTATIONGUIDELINE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OKMediaItem.h"
#import "OKPresentation.h"
#import "OKPresentationCanvas.h"
#import "OKProducerPlugin.h"

@interface OKPresentationGuideline : NSObject <NSCopying>

 {
    NSString *_mediaItemUniqueURLString;
    NSUInteger _presentationCanvasType;
    NSString *_presentationCanvasKeyPath;
    NSString *_producerPluginUUID;
}


@property (copy, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) OKMediaItem *mediaItem; // ivar: _mediaItem
@property (nonatomic) OKPresentation *presentation; // ivar: _presentation
@property (retain, nonatomic) OKPresentationCanvas *presentationCanvas; // ivar: _presentationCanvas
@property (retain, nonatomic) OKProducerPlugin *producerPlugin; // ivar: _producerPlugin
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) id *value; // ivar: _value


+(id)defaultMobileRecommendedResolutionSizes;
+(id)globalUniqueKeyForKey:(id)arg0 ;
+(id)globalUniqueKeyForKey:(id)arg0 mediaItem:(id)arg1 ;
+(id)globalUniqueKeyForKey:(id)arg0 mediaItem:(id)arg1 presentationCanvas:(id)arg2 producerPlugin:(id)arg3 ;
+(id)globalUniqueKeyForKey:(id)arg0 presentationCanvas:(id)arg1 ;
+(id)globalUniqueKeyForKey:(id)arg0 producerPlugin:(id)arg1 ;
+(id)guidelineAuthoringAttributedTitle:(id)arg0 ;
+(id)guidelineAuthoringAudioURLs:(id)arg0 ;
+(id)guidelineAuthoringCurrentPageDuration:(CGFloat)arg0 ;
+(id)guidelineAuthoringDebuggingEnabled:(BOOL)arg0 ;
+(id)guidelineAuthoringDefaultMobileRecommendedResolutionSizes;
+(id)guidelineAuthoringDurationFactor:(CGFloat)arg0 ;
+(id)guidelineAuthoringFitToAudioDuration:(BOOL)arg0 ;
+(id)guidelineAuthoringInteractiveTransitionSettings:(id)arg0 ;
+(id)guidelineAuthoringMaximumDuration:(CGFloat)arg0 ;
+(id)guidelineAuthoringMediaAttributes:(id)arg0 ;
+(id)guidelineAuthoringMinimumDuration:(CGFloat)arg0 ;
+(id)guidelineAuthoringPageDuration:(CGFloat)arg0 ;
+(id)guidelineAuthoringRandomSeed:(NSUInteger)arg0 ;
+(id)guidelineAuthoringRecommendedResolutionSizes:(id)arg0 ;
+(id)guidelineAuthoringSynopsis:(id)arg0 ;
+(id)guidelineAuthoringTitle:(id)arg0 ;
+(id)guidelineAuthoringTotalDuration:(CGFloat)arg0 ;
+(id)guidelineAuthoringTransitionSettings:(id)arg0 ;
+(id)guidelineLiveAuthoringEnabled:(BOOL)arg0 ;
+(id)guidelineWithType:(NSUInteger)arg0 key:(id)arg1 value:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionary;
-(id)globalUniqueKey;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 key:(id)arg1 value:(id)arg2 ;
-(void)dealloc;


@end


#endif