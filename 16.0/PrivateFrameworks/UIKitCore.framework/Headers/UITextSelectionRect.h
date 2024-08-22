// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTSELECTIONRECT_H
#define UITEXTSELECTIONRECT_H


#import <Foundation/Foundation.h>

#import "UITextSelectionRectCustomHandleInfo.h"
#import "UIBezierPath.h"
#import "UITextSelectionRectImpl.h"

@interface UITextSelectionRect : NSObject

@property (readonly, nonatomic) UITextSelectionRectCustomHandleInfo *_customHandleInfo;
@property (readonly, nonatomic) BOOL _drawsOwnHighlight;
@property (readonly, nonatomic) UIBezierPath *_path;
@property (readonly, nonatomic) BOOL containsEnd;
@property (readonly, nonatomic) BOOL containsStart;
@property (readonly, nonatomic, getter=_isImpl) UITextSelectionRectImpl *isImpl;
@property (readonly, nonatomic) BOOL isVertical;
@property (readonly, nonatomic) CGRect rect;
@property (readonly, nonatomic) NSInteger writingDirection;


+(BOOL)endIsHorizontal:(id)arg0 ;
+(BOOL)startIsHorizontal:(id)arg0 ;
+(id)endCustomSelectionPathFromRects:(id)arg0 ;
+(id)endRectFromRects:(id)arg0 ;
+(id)startCustomSelectionPathFromRects:(id)arg0 ;
+(id)startRectFromRects:(id)arg0 ;
+(struct CGRect )endEdgeFromRects:(id)arg0 ;
+(struct CGRect )startEdgeFromRects:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)range;


@end


#endif