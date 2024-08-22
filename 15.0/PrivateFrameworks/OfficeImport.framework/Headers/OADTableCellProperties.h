// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADTABLECELLPROPERTIES_H
#define OADTABLECELLPROPERTIES_H


#import <Foundation/Foundation.h>

#import "OADStroke.h"
#import "OADTableCell3DProperties.h"
#import "OADFill.h"

@interface OADTableCellProperties : NSObject {
    OADStroke *mLeftStroke;
    OADStroke *mRightStroke;
    OADStroke *mTopStroke;
    OADStroke *mBottomStroke;
    OADStroke *mTopLeftToBottomRightStroke;
    OADStroke *mBottomLeftToTopRightStroke;
    OADTableCell3DProperties *mThreeDProperties;
    OADFill *mFill;
    float mLeftMargin;
    BOOL mIsLeftMarginOverridden;
    float mRightMargin;
    BOOL mIsRightMarginOverridden;
    float mTopMargin;
    BOOL mIsTopMarginOverridden;
    float mBottomMargin;
    BOOL mIsBottomMarginOverridden;
    unsigned char mTextFlow;
    BOOL mIsTextFlowOverridden;
    unsigned char mTextAnchor;
    BOOL mIsTextAnchorOverridden;
    BOOL mTextAnchorCenter;
    BOOL mIsTextAnchorCenterOverridden;
    unsigned char mTextHorizontalOverflow;
    BOOL mIsTextHorizontalOverflowOverridden;
}




-(BOOL)isBottomMarginOverridden;
-(BOOL)isLeftMarginOverridden;
-(BOOL)isRightMarginOverridden;
-(BOOL)isTextAnchorCenterOverridden;
-(BOOL)isTextAnchorOverridden;
-(BOOL)isTextFlowOverridden;
-(BOOL)isTextHorizontalOverflowOverridden;
-(BOOL)isTopMarginOverridden;
-(BOOL)textAnchorCenter;
-(float)bottomMargin;
-(float)leftMargin;
-(float)rightMargin;
-(float)topMargin;
-(id)bottomLeftToTopRightStroke;
-(id)bottomStroke;
-(id)description;
-(id)fill;
-(id)leftStroke;
-(id)rightStroke;
-(id)stroke:(int)arg0 ;
-(id)strokeNormalToDir:(int)arg0 bound:(int)arg1 ;
-(id)threeDProperties;
-(id)topLeftToBottomRightStroke;
-(id)topStroke;
-(unsigned char)textAnchor;
-(unsigned char)textFlow;
-(unsigned char)textHorizontalOverflow;
-(void)setBottomLeftToTopRightStroke:(id)arg0 ;
-(void)setBottomMargin:(float)arg0 ;
-(void)setBottomStroke:(id)arg0 ;
-(void)setFill:(id)arg0 ;
-(void)setLeftMargin:(float)arg0 ;
-(void)setLeftStroke:(id)arg0 ;
-(void)setRightMargin:(float)arg0 ;
-(void)setRightStroke:(id)arg0 ;
-(void)setStrokeOfType:(int)arg0 toValue:(id)arg1 ;
-(void)setTextAnchor:(unsigned char)arg0 ;
-(void)setTextAnchorCenter:(BOOL)arg0 ;
-(void)setTextFlow:(unsigned char)arg0 ;
-(void)setTextHorizontalOverflow:(unsigned char)arg0 ;
-(void)setThreeDProperties:(id)arg0 ;
-(void)setTopLeftToBottomRightStroke:(id)arg0 ;
-(void)setTopMargin:(float)arg0 ;
-(void)setTopStroke:(id)arg0 ;


@end


#endif