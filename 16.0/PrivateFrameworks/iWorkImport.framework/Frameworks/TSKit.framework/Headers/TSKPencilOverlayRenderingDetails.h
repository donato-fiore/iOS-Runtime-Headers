// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKPENCILOVERLAYRENDERINGDETAILS_H
#define TSKPENCILOVERLAYRENDERINGDETAILS_H

@class TSPData, TSUImage, TSUBezierPath;
@protocol TSKPencilAnnotation, TSKPencilAnnotationStorage;

#import <Foundation/Foundation.h>

#import "TSKPKDrawing.h"
#import "TSKPencilOverlayAnchorSelectionRectangle.h"

@interface TSKPencilOverlayRenderingDetails : NSObject

@property (retain, nonatomic) TSPData *dataToInvalidateFromAfterDownload; // ivar: _dataToInvalidateFromAfterDownload
@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (readonly, nonatomic) NSObject<TSKPencilAnnotation> *pencilAnnotation; // ivar: _pencilAnnotation
@property (retain, nonatomic) NSObject<TSKPencilAnnotationStorage> *pencilAnnotationStorage; // ivar: _pencilAnnotationStorage
@property (retain, nonatomic) TSUImage *scaledImage; // ivar: _scaledImage
@property (retain, nonatomic) TSKPKDrawing *subDrawing; // ivar: _subDrawing
@property (retain, nonatomic) TSUBezierPath *transformedPath; // ivar: _transformedPath
@property (nonatomic) CGRect unscaledImageClipRect; // ivar: _unscaledImageClipRect
@property (nonatomic) CGRect unscaledImageFrame; // ivar: _unscaledImageFrame
@property (retain, nonatomic) TSKPencilOverlayAnchorSelectionRectangle *unscaledSelectionRectangle; // ivar: _unscaledSelectionRectangle


+(id)p_baseColorForPenColor:(id)arg0 ;
+(struct CGColor *)fillColorForPenColor:(id)arg0 ;
+(struct CGColor *)strokeColorForPenColor:(id)arg0 attachedType:(NSInteger)arg1 ;
-(BOOL)containsPointForHitTesting:(struct CGPoint )arg0 ;
-(id)description;
-(id)initWithPencilAnnotation:(id)arg0 pencilAnnotationStorage:(id)arg1 ;


@end


#endif