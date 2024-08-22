// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADSTROKE_H
#define OADSTROKE_H

@protocol NSCopying;


#import "OADProperties.h"
#import "OADColor.h"
#import "OADFill.h"
#import "OADDash.h"
#import "OADLineJoin.h"
#import "OADLineEnd.h"

@interface OADStroke : OADProperties <NSCopying>

 {
    OADColor *mColor;
    OADFill *mFill;
    OADDash *mDash;
    OADLineJoin *mJoin;
    float mWidth;
    unsigned char mCap;
    unsigned char mCompoundType;
    int mPenAlignment;
    BOOL mIsColorOverridden;
    BOOL mIsWidthOverridden;
    BOOL mIsCapOverridden;
    BOOL mIsCompoundTypeOverridden;
    BOOL mIsPenAlignmentOverridden;
}


@property (retain, nonatomic) OADLineEnd *head; // ivar: mHead
@property (retain, nonatomic) OADLineEnd *tail; // ivar: mTail


+(id)blackStroke;
+(id)defaultProperties;
+(id)nullStroke;
-(BOOL)isAnythingOverridden;
-(BOOL)isCapOverridden;
-(BOOL)isColorOverridden;
-(BOOL)isCompoundTypeOverridden;
-(BOOL)isDashOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFillOverridden;
-(BOOL)isHeadOverridden;
-(BOOL)isJoinOverridden;
-(BOOL)isPenAlignmentOverridden;
-(BOOL)isTailOverridden;
-(BOOL)isWidthOverridden;
-(NSUInteger)hash;
-(float)width;
-(id)color;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dash;
-(id)fill;
-(id)init;
-(id)initWithDefaults;
-(id)join;
-(int)penAlignment;
-(unsigned char)cap;
-(unsigned char)compoundType;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setCap:(unsigned char)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setCompoundType:(unsigned char)arg0 ;
-(void)setDash:(id)arg0 ;
-(void)setFill:(id)arg0 ;
-(void)setJoin:(id)arg0 ;
-(void)setParent:(id)arg0 ;
-(void)setPenAlignment:(int)arg0 ;
-(void)setStyleColor:(id)arg0 ;
-(void)setWidth:(float)arg0 ;


@end


#endif