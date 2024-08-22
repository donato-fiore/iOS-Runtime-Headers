// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSTYLE_H
#define EDSTYLE_H

@class NSString;
@protocol NSCopying, EDImmutableObject;

#import <Foundation/Foundation.h>

#import "EDResources.h"
#import "EDProtection.h"
#import "EDAlignmentInfo.h"
#import "EDBorders.h"
#import "EDContentFormat.h"
#import "EDFill.h"
#import "EDFont.h"

@interface EDStyle : NSObject <NSCopying, EDImmutableObject>

 {
    EDResources *mResources;
    NSUInteger mParentIndex;
    NSUInteger mContentFormatId;
    NSUInteger mFontIndex;
    NSUInteger mFillIndex;
    NSUInteger mAlignmentInfoIndex;
    NSUInteger mBordersIndex;
    EDProtection *mProtection;
    NSUInteger mIndex;
    BOOL mContentFormatOverridden;
    BOOL mFontOverridden;
    BOOL mFillOverridden;
    BOOL mAlignmentInfoOverridden;
    BOOL mBordersOverridden;
    BOOL mProtectionOverridden;
    BOOL mDoNotModify;
}


@property (retain) EDAlignmentInfo *alignmentInfo;
@property (getter=isAlignmentInfoApplied) BOOL alignmentInfoApplied; // ivar: mAlignmentInfoApplied
@property (getter=isAlignmentInfoOverridden) BOOL alignmentInfoOverridden;
@property (retain) EDBorders *borders;
@property (getter=isBordersApplied) BOOL bordersApplied; // ivar: mBordersApplied
@property (getter=isBordersOverridden) BOOL bordersOverridden;
@property (retain) EDContentFormat *contentFormat;
@property (getter=isContentFormatApplied) BOOL contentFormatApplied; // ivar: mContentFormatApplied
@property (getter=isContentFormatOverridden) BOOL contentFormatOverridden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) EDFill *fill;
@property (getter=isFillApplied) BOOL fillApplied; // ivar: mFillApplied
@property (getter=isFillOverridden) BOOL fillOverridden;
@property (retain) EDFont *font;
@property (getter=isFontApplied) BOOL fontApplied; // ivar: mFontApplied
@property (getter=isFontOverridden) BOOL fontOverridden;
@property (readonly) NSUInteger hash;
@property (retain) EDProtection *protection;
@property (getter=isProtectionApplied) BOOL protectionApplied; // ivar: mProtectionApplied
@property (getter=isProtectionOverridden) BOOL protectionOverridden;
@property (readonly) Class superclass;


+(id)styleWithResources:(id)arg0 ;
-(BOOL)isCenterAcrossAligned;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStyle:(id)arg0 ;
-(BOOL)isEquivalentToStyle:(id)arg0 ;
-(NSUInteger)index;
-(NSUInteger)parentIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResources:(id)arg0 ;
-(id)parent;
-(void)setDoNotModify:(BOOL)arg0 ;
-(void)setIndex:(NSUInteger)arg0 ;
-(void)setParent:(id)arg0 ;
-(void)setParentIndex:(NSUInteger)arg0 ;


@end


#endif