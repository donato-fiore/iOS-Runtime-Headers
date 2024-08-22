// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLEATTACHMENTCELL_H
#define WFVARIABLEATTACHMENTCELL_H

@class UIFont, NSString;
@protocol NSTextAttachmentCell;

#import <Foundation/Foundation.h>

#import "WFVariableAttachment.h"

@interface WFVariableAttachmentCell : NSObject <NSTextAttachmentCell>



@property (weak, nonatomic) WFVariableAttachment *attachment; // ivar: _attachment
@property (nonatomic) NSUInteger cachedImageControlState; // ivar: _cachedImageControlState
@property (retain, nonatomic) UIFont *cachedImageFont; // ivar: _cachedImageFont
@property (nonatomic) CGSize cachedImageSize; // ivar: _cachedImageSize
@property (copy, nonatomic) NSString *cachedImageVariableName; // ivar: _cachedImageVariableName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)currentControlState;
-(struct CGPoint )cellBaselineOffset;
-(struct CGRect )cellFrameForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect )arg1 glyphPosition:(struct CGPoint )arg2 characterIndex:(NSUInteger)arg3 ;
-(struct CGSize )cellSize;
-(void)_drawWithFrame:(struct CGRect )arg0 inView:(id)arg1 characterIndex:(NSUInteger)arg2 layoutManager:(id)arg3 ;
-(void)clearCachedImage;
-(void)drawWithFrame:(struct CGRect )arg0 inView:(id)arg1 ;
-(void)drawWithFrame:(struct CGRect )arg0 inView:(id)arg1 characterIndex:(NSUInteger)arg2 ;
-(void)drawWithFrame:(struct CGRect )arg0 inView:(id)arg1 characterIndex:(NSUInteger)arg2 layoutManager:(id)arg3 ;


@end


#endif