// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTROKESELECTION_H
#define PKSTROKESELECTION_H

@class NSString, NSDictionary, NSItemProvider, NSSet, NSOrderedSet, NSArray;
@protocol NSItemProviderReading, NSItemProviderWriting;

#import <Foundation/Foundation.h>

#import "PKDrawing.h"
#import "PKStroke.h"
#import "PKStrokeSelectionImage.h"

@interface PKStrokeSelection : NSObject <NSItemProviderReading, NSItemProviderWriting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKDrawing *drawing; // ivar: _drawing
@property (copy, nonatomic) NSDictionary *externalElements; // ivar: _externalElements
@property (copy, nonatomic) NSItemProvider *externalElementsItemProvider; // ivar: _externalElementsItemProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKStroke *lassoStroke; // ivar: _lassoStroke
@property (readonly, nonatomic) NSSet *strokeIdentifiers; // ivar: _strokeIdentifiers
@property (copy, nonatomic) PKStrokeSelectionImage *strokeImage; // ivar: _strokeImage
@property (copy, nonatomic) PKStrokeSelectionImage *strokeImageWithHighlight; // ivar: _strokeImageWithHighlight
@property (readonly, nonatomic) NSOrderedSet *strokes; // ivar: _strokes
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 drawingClass:(Class)arg2 error:(*id)arg3 ;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
+(id)strokeSelectionFromData:(id)arg0 ;
+(id)strokeSelectionFromData:(id)arg0 forDrawingClass:(Class)arg1 ;
-(BOOL)containsBitmapData;
-(id)_newDrawingWithStrokes;
-(id)imageDataForSelection;
-(id)initWithStrokes:(id)arg0 externalElements:(id)arg1 lassoStroke:(id)arg2 drawing:(id)arg3 ;
-(id)initWithStrokes:(id)arg0 lassoStroke:(id)arg1 drawing:(id)arg2 ;
-(id)legacyStrokeDataForSelection;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)strokeDataForSelection;
-(struct CGImage *)newExternalElementsCGImageFromCGImage:(struct CGImage *)arg0 withConfig:(id)arg1 selectionInteraction:(id)arg2 renderImage:(BOOL)arg3 ;
-(struct CGRect )bounds;
-(struct CGRect )boundsWithoutLasso;
-(void)generateImageWithConfig:(id)arg0 fullSizeConfig:(id)arg1 selectionInteraction:(id)arg2 withCompletion:(id)arg3 ;


@end


#endif