// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDRAWINGVERSIONEDDOCUMENT_H
#define PKDRAWINGVERSIONEDDOCUMENT_H



#import "PKVersionedDocument.h"
#import "PKDrawingConcrete.h"

@interface PKDrawingVersionedDocument : PKVersionedDocument

@property (retain, nonatomic) PKDrawingConcrete *drawing; // ivar: _drawing
@property (retain, nonatomic) Class drawingClass; // ivar: _drawingClass
@property (nonatomic) BOOL loadNonInkingStrokes; // ivar: _loadNonInkingStrokes


+(unsigned int)minimumSupportedVersion;
+(unsigned int)serializationVersion;
-(BOOL)loadUnzippedData:(id)arg0 ;
-(NSUInteger)mergeWithDrawingVersionedDocument:(id)arg0 ;
-(id)initWithDrawing:(id)arg0 ;
-(id)initWithDrawingClass:(Class)arg0 ;
-(id)serializeCurrentVersion:(*unsigned int)arg0 ;
-(void)mergeVersion:(unsigned int)arg0 fromData:(id)arg1 ;


@end


#endif