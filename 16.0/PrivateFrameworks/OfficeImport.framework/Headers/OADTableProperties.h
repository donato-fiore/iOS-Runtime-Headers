// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTABLEPROPERTIES_H
#define OADTABLEPROPERTIES_H

@class NSArray, NSString;
@protocol OADEffectsParent;


#import "OADDrawableProperties.h"
#import "OADTableStyle.h"

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent>

 {
    OADTableStyle *mStyle;
    BOOL mRightToLeft;
    BOOL mFirstRow;
    BOOL mFirstColumn;
    BOOL mLastRow;
    BOOL mLastColumn;
    BOOL mBandRow;
    BOOL mBandColumn;
    NSArray *mEffects;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultProperties;
-(BOOL)bandColumn;
-(BOOL)bandRow;
-(BOOL)firstColumn;
-(BOOL)firstRow;
-(BOOL)hasBandsNormalToDir:(int)arg0 ;
-(BOOL)hasEffects;
-(BOOL)hasVectorNormalToDir:(int)arg0 atExtremePos:(int)arg1 ;
-(BOOL)lastColumn;
-(BOOL)lastRow;
-(BOOL)rightToLeft;
-(id)effects;
-(id)initWithDefaults;
-(id)style;
-(void)setBandColumn:(BOOL)arg0 ;
-(void)setBandRow:(BOOL)arg0 ;
-(void)setEffects:(id)arg0 ;
-(void)setFirstColumn:(BOOL)arg0 ;
-(void)setFirstRow:(BOOL)arg0 ;
-(void)setLastColumn:(BOOL)arg0 ;
-(void)setLastRow:(BOOL)arg0 ;
-(void)setRightToLeft:(BOOL)arg0 ;
-(void)setStyle:(id)arg0 ;


@end


#endif