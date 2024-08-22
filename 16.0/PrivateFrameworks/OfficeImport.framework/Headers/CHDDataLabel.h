// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHDDATALABEL_H
#define CHDDATALABEL_H


#import <Foundation/Foundation.h>

#import "EDResources.h"
#import "OADGraphicProperties.h"
#import "EDString.h"

@interface CHDDataLabel : NSObject {
    EDResources *mResources;
    NSUInteger mContentFormatId;
    int mPosition;
    BOOL mShowLeaderLines;
    BOOL mShowCategoryName;
    BOOL mShowSeriesName;
    BOOL mShowPercent;
    BOOL mShowBubbleSize;
    BOOL mShowValue;
    BOOL mShowLegendKey;
    BOOL mIsPositionAffineTransform;
    BOOL mContentFormatDerived;
    BOOL mDeleted;
    BOOL mExtensionDetected;
    CGFloat mRotation;
    OADGraphicProperties *mGraphicProperties;
    OADGraphicProperties *mLeaderlineGraphicProperties;
}


@property (retain, nonatomic) EDString *string; // ivar: mString


+(id)dataLabelWithResources:(id)arg0 ;
-(BOOL)hasLeaderLinesGraphics;
-(BOOL)isContentFormatDerivedFromDataPoints;
-(BOOL)isCustomLabelBlockingVisibility;
-(BOOL)isDeleted;
-(BOOL)isExtensionDetected;
-(BOOL)isLabelVisible;
-(BOOL)isPositionAffineTransform;
-(BOOL)isShowBubbleSize;
-(BOOL)isShowCategoryName;
-(BOOL)isShowLeaderLines;
-(BOOL)isShowLegendKey;
-(BOOL)isShowPercent;
-(BOOL)isShowSeriesName;
-(BOOL)isShowValue;
-(CGFloat)rotationAngle;
-(NSUInteger)contentFormatId;
-(id)contentFormat;
-(id)description;
-(id)graphicProperties;
-(id)initWithResources:(id)arg0 ;
-(id)leaderlineGraphicProperties;
-(int)position;
-(void)setContentFormat:(id)arg0 ;
-(void)setContentFormatId:(NSUInteger)arg0 ;
-(void)setDeleted:(BOOL)arg0 ;
-(void)setExtensionDetected:(BOOL)arg0 ;
-(void)setGraphicProperties:(id)arg0 ;
-(void)setIsContentFormatDerivedFromDataPoints:(BOOL)arg0 ;
-(void)setIsPositionAffineTransform:(BOOL)arg0 ;
-(void)setLeaderlineGraphicProperties:(id)arg0 ;
-(void)setPosition:(int)arg0 ;
-(void)setRotationAngle:(CGFloat)arg0 ;
-(void)setShowBubbleSize:(BOOL)arg0 ;
-(void)setShowCategoryName:(BOOL)arg0 ;
-(void)setShowLeaderLines:(BOOL)arg0 ;
-(void)setShowLegendKey:(BOOL)arg0 ;
-(void)setShowPercent:(BOOL)arg0 ;
-(void)setShowSeriesName:(BOOL)arg0 ;
-(void)setShowValue:(BOOL)arg0 ;


@end


#endif