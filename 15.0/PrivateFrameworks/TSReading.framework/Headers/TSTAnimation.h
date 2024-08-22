// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTANIMATION_H
#define TSTANIMATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTLayout.h"

@interface TSTAnimation : NSObject <NSCopying>

 {
    TSTLayout *mLayout;
    int mKind;
    *? mCellRanges;
    NSUInteger mCellRangeCount;
    BOOL mByColumn;
    BOOL mByRow;
    BOOL mByCell;
    BOOL mByContent;
    BOOL mByCellRange;
    BOOL mByMissingCellRange;
    BOOL mReverse;
}


@property (readonly) NSUInteger cellRangeCount;
@property (readonly) BOOL clipStrokes;
@property (readonly) BOOL drawCellBackground;
@property (readonly) BOOL drawCellContent;
@property (readonly) BOOL drawStrokes;
@property (readonly) BOOL drawTableBackground;
@property (readonly) BOOL drawTableName;
@property BOOL drawsBlackAndWhite; // ivar: mDrawsBlackAndWhite
@property (readonly) BOOL enabled;
@property BOOL expandBackgroundFill; // ivar: mExpandBackgroundFill
@property (readonly) BOOL final; // ivar: mFinal
@property BOOL showsOverlayLayers; // ivar: mShowsOverlayLayers
@property BOOL showsTableChrome; // ivar: mShowsTableChrome
@property (readonly) NSUInteger stage; // ivar: mStage
@property (readonly) NSUInteger stageCount; // ivar: mStageCount


+(BOOL)deliveryStyleSupportedForExport:(NSUInteger)arg0 ;
+(NSUInteger)stageCountForTextureDeliveryStyle:(NSUInteger)arg0 andTable:(id)arg1 ;
+(NSUInteger)textureDeliveryStyleFromDeliveryString:(id)arg0 ;
+(id)newAnimationWithLayout:(id)arg0 andCellRange:(struct ? )arg1 ;
+(id)newAnimationWithLayout:(id)arg0 andDeliveryStyle:(NSUInteger)arg1 ;
+(id)textureDeliveryStylesLocalized:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct ? )cellRangeAtIndex:(NSUInteger)arg0 ;
-(void)addCellRange:(struct ? )arg0 ;
-(void)clearCellRanges;
-(void)dealloc;


@end


#endif