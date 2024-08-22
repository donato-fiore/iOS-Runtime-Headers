// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDAXIS_H
#define CHDAXIS_H

@class NSArray, NSString;
@protocol EDKeyedObject;

#import <Foundation/Foundation.h>

#import "CHDTitle.h"
#import "OADGraphicProperties.h"
#import "EDResources.h"

@interface CHDAxis : NSObject <EDKeyedObject>

 {
    BOOL mReverseOrder;
    BOOL mReverseOrderOverridden;
    BOOL mSecondary;
    BOOL mDateTimeFormattingFlag;
    BOOL mLineVisible;
    BOOL mDeleted;
    BOOL mAutoMinimumValue;
    BOOL mAutoMaximumValue;
    BOOL mAutoCrossValue;
    BOOL mContentFormatDerived;
    int mAxisId;
    NSUInteger mContentFormatId;
    NSUInteger mFontIndex;
    CGFloat mScalingMaximum;
    CGFloat mScalingMinimum;
    int mOrientation;
    CGFloat mCrossAxisId;
    CGFloat mCrossesAt;
    int mMajorTickMark;
    int mMinorTickMark;
    int mAxisPosition;
    int mAxisType;
    int mTickLabelPosition;
    CHDTitle *mTitle;
    OADGraphicProperties *mMinorGridLinesGraphicProperties;
    OADGraphicProperties *mMajorGridLinesGraphicProperties;
    OADGraphicProperties *mAxisGraphicProperties;
    int mCrossBetween;
    int mCrosses;
    CGFloat mTickLabelRotation;
    BOOL mIsAutoRotation;
    NSUInteger mTickLabelColorIndex;
    EDResources *mResources;
    NSArray *mLabelEffects;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAutoCrossValue;
-(BOOL)isAutoMaximumValue;
-(BOOL)isAutoMinimumValue;
-(BOOL)isContentFormatDerivedFromDataPoints;
-(BOOL)isDate;
-(BOOL)isDateTimeFormattingFlag;
-(BOOL)isDeleted;
-(BOOL)isHorizontalPosition;
-(BOOL)isLineVisible;
-(BOOL)isReverseOrder;
-(BOOL)isReverseOrderOverridden;
-(BOOL)isSecondary;
-(BOOL)isTickLabelAutoRotation;
-(BOOL)isTickLabelVisible;
-(CGFloat)crossAxisId;
-(CGFloat)crossAxisIdForXml;
-(CGFloat)crossesAt;
-(CGFloat)scalingMaximum;
-(CGFloat)scalingMinimum;
-(CGFloat)tickLabelRotationAngle;
-(NSInteger)key;
-(NSUInteger)contentFormatId;
-(NSUInteger)fontIndex;
-(NSUInteger)tickLabelColorIndex;
-(id)axisGraphicProperties;
-(id)contentFormat;
-(id)defaultDateTimeContentFormat;
-(id)font;
-(id)initWithResources:(id)arg0 ;
-(id)labelEffects;
-(id)majorGridLinesGraphicProperties;
-(id)minorGridLinesGraphicProperties;
-(id)tickLabelColor;
-(id)title;
-(int)axisId;
-(int)axisIdForXml;
-(int)axisPosition;
-(int)axisType;
-(int)crossBetween;
-(int)crosses;
-(int)majorTickMark;
-(int)minorTickMark;
-(int)orientation;
-(int)tickLabelPosition;
-(void)adjustAxisPositionForHorizontalChart;
-(void)setAxisGraphicProperties:(id)arg0 ;
-(void)setAxisId:(int)arg0 ;
-(void)setAxisPosition:(int)arg0 ;
-(void)setAxisType:(int)arg0 ;
-(void)setContentFormat:(id)arg0 ;
-(void)setContentFormatId:(NSUInteger)arg0 ;
-(void)setCrossAxisId:(CGFloat)arg0 ;
-(void)setCrossBetween:(int)arg0 ;
-(void)setCrosses:(int)arg0 ;
-(void)setCrossesAt:(CGFloat)arg0 ;
-(void)setDateTimeFormattingFlag:(BOOL)arg0 ;
-(void)setDeleted:(BOOL)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setFontIndex:(NSUInteger)arg0 ;
-(void)setIsContentFormatDerivedFromDataPoints:(BOOL)arg0 ;
-(void)setLabelEffects:(id)arg0 ;
-(void)setLineVisible:(BOOL)arg0 ;
-(void)setMajorGridLinesGraphicProperties:(id)arg0 ;
-(void)setMajorTickMark:(int)arg0 ;
-(void)setMinorGridLinesGraphicProperties:(id)arg0 ;
-(void)setMinorTickMark:(int)arg0 ;
-(void)setOrientation:(int)arg0 ;
-(void)setReverseOrder:(BOOL)arg0 ;
-(void)setReverseOrderOverridden:(BOOL)arg0 ;
-(void)setScalingMaximum:(CGFloat)arg0 ;
-(void)setScalingMinimum:(CGFloat)arg0 ;
-(void)setSecondary:(BOOL)arg0 ;
-(void)setTickLabelAutoRotation:(BOOL)arg0 ;
-(void)setTickLabelColorIndex:(NSUInteger)arg0 ;
-(void)setTickLabelPosition:(int)arg0 ;
-(void)setTickLabelRotationAngle:(CGFloat)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif