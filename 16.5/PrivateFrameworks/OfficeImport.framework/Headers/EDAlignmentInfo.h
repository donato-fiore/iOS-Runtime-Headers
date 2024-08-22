// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDALIGNMENTINFO_H
#define EDALIGNMENTINFO_H

@class NSString;
@protocol NSCopying, EDImmutableObject;

#import <Foundation/Foundation.h>


@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject>

 {
    int mHorizontalAlignment;
    int mVerticalAlignment;
    int mIndent;
    int mTextRotation;
    BOOL mTextWrapped;
    BOOL mHorizontalAlignOverridden;
    BOOL mVerticalAlignOverridden;
    BOOL mIndentOverridden;
    BOOL mTextWrappedOveridden;
    BOOL mDoNotModify;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)alignmentInfo;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAlignmentInfo:(id)arg0 ;
-(BOOL)isHorizontalAlignOverridden;
-(BOOL)isIndentOverridden;
-(BOOL)isTextWrapped;
-(BOOL)isTextWrappedOverridden;
-(BOOL)isVerticalAlignOverridden;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(int)horizontalAlignment;
-(int)indent;
-(int)textRotation;
-(int)verticalAlignment;
-(void)setDoNotModify:(BOOL)arg0 ;
-(void)setHorizontalAlignment:(int)arg0 ;
-(void)setIndent:(int)arg0 ;
-(void)setTextRotation:(int)arg0 ;
-(void)setTextWrapped:(BOOL)arg0 ;
-(void)setVerticalAlignment:(int)arg0 ;


@end


#endif