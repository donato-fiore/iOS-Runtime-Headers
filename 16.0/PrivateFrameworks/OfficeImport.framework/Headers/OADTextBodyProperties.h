// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTEXTBODYPROPERTIES_H
#define OADTEXTBODYPROPERTIES_H



#import "OADProperties.h"
#import "OADTextBodyAutoFit.h"
#import "OADTextWarp.h"

@interface OADTextBodyProperties : OADProperties {
    OADTextBodyAutoFit *mAutoFit;
    OADTextWarp *mTextWarp;
    float mTopInset;
    float mLeftInset;
    float mBottomInset;
    float mRightInset;
    float mRotation;
    float mColumnSpacing;
    unsigned short mColumnCount;
    unsigned short mTextBodyId;
    unsigned char mTextAnchorType;
    unsigned char mFlowType;
    unsigned char mWrapType;
    unsigned char mVerticalOverflowType;
    unsigned char mHorizontalOverflowType;
    BOOL mRepectFirstLastParagraphSpacing;
    BOOL mIsUpright;
    BOOL mIsAnchorCenter;
    BOOL mIsLeftToRightColumns;
    BOOL mHasVerticalOverflowType;
    BOOL mHasHorizontalOverflowType;
    BOOL mHasTextBodyId;
    BOOL mHasFlowType;
    BOOL mHasWrapType;
    BOOL mHasTextAnchorType;
    BOOL mHasIsAnchorCenter;
    BOOL mHasIsUpright;
    BOOL mHasRotation;
    BOOL mHasColumnCount;
    BOOL mHasColumnSpacing;
    BOOL mHasIsLeftToRightColumns;
    BOOL mHasRepectFirstLastParagraphSpacing;
    BOOL mHasTopInset;
    BOOL mHasLeftInset;
    BOOL mHasRightInset;
    BOOL mHasBottomInset;
}




+(id)defaultEscherWordArtProperties;
+(id)defaultProperties;
-(BOOL)hasAutoFit;
-(BOOL)hasBottomInset;
-(BOOL)hasColumnCount;
-(BOOL)hasColumnSpacing;
-(BOOL)hasFlowType;
-(BOOL)hasHorizontalOverflowType;
-(BOOL)hasIsAnchorCenter;
-(BOOL)hasIsLeftToRightColumns;
-(BOOL)hasIsUpright;
-(BOOL)hasLeftInset;
-(BOOL)hasRespectLastFirstLineSpacing;
-(BOOL)hasRightInset;
-(BOOL)hasRotation;
-(BOOL)hasTextAnchorType;
-(BOOL)hasTextBodyId;
-(BOOL)hasTextWarp;
-(BOOL)hasTopInset;
-(BOOL)hasVerticalOverflowType;
-(BOOL)hasWrapType;
-(BOOL)isAnchorCenter;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLeftToRightColumns;
-(BOOL)isUpright;
-(BOOL)isWarped;
-(BOOL)respectLastFirstLineSpacing;
-(NSUInteger)hash;
-(float)bottomInset;
-(float)columnSpacing;
-(float)leftInset;
-(float)rightInset;
-(float)rotation;
-(float)topInset;
-(id)autoFit;
-(id)description;
-(id)init;
-(id)initWithDefaults;
-(id)textWarp;
-(int)columnCount;
-(int)textBodyId;
-(unsigned char)flowType;
-(unsigned char)horizontalOverflowType;
-(unsigned char)textAnchorType;
-(unsigned char)verticalOverflowType;
-(unsigned char)wrapType;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setAutoFit:(id)arg0 ;
-(void)setBottomInset:(float)arg0 ;
-(void)setColumnCount:(int)arg0 ;
-(void)setColumnSpacing:(float)arg0 ;
-(void)setFlowType:(unsigned char)arg0 ;
-(void)setHorizontalOverflowType:(unsigned char)arg0 ;
-(void)setIsAnchorCenter:(BOOL)arg0 ;
-(void)setIsLeftToRightColumns:(BOOL)arg0 ;
-(void)setIsUpright:(BOOL)arg0 ;
-(void)setLeftInset:(float)arg0 ;
-(void)setRespectLastFirstLineSpacing:(BOOL)arg0 ;
-(void)setRightInset:(float)arg0 ;
-(void)setRotation:(float)arg0 ;
-(void)setTextAnchorType:(unsigned char)arg0 ;
-(void)setTextBodyId:(int)arg0 ;
-(void)setTextWarp:(id)arg0 ;
-(void)setTopInset:(float)arg0 ;
-(void)setVerticalOverflowType:(unsigned char)arg0 ;
-(void)setWrapType:(unsigned char)arg0 ;


@end


#endif