// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDPENCILANNOTATIONSTORAGE_H
#define TSDPENCILANNOTATIONSTORAGE_H

@class TSPObject, NSDate, NSString, TSKPKDrawing, PKDrawing, NSData, TSPData, TSUColor, TSUImage, NSArray, TSUBezierPath;
@protocol TSKPencilAnnotationStorage;



@interface TSDPencilAnnotationStorage : TSPObject <TSKPencilAnnotationStorage>



@property (nonatomic) NSInteger attachedLocation; // ivar: _attachedLocation
@property (nonatomic) NSInteger attachedType; // ivar: _attachedType
@property (nonatomic) NSInteger compoundAnnotationType; // ivar: _compoundAnnotationType
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSKPKDrawing *drawing; // ivar: _drawing
@property (retain, nonatomic) PKDrawing *drawingForTextRecognition; // ivar: _drawingForTextRecognition
@property (readonly, nonatomic) NSData *encodedDrawing;
@property (readonly, nonatomic) TSPData *encodedDrawingTSPData; // ivar: _encodedDrawingTSPData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCalloutLine;
@property (readonly, nonatomic) BOOL isCalloutMarginAnnotation;
@property (readonly, nonatomic) BOOL isCalloutParentStorage;
@property (readonly, nonatomic) NSData *legacyEncodedDrawing;
@property (readonly, nonatomic) TSPData *legacyEncodedDrawingTSPData; // ivar: _legacyEncodedDrawingTSPData
@property (nonatomic) CGPoint markupOffset; // ivar: _markupOffset
@property (readonly, nonatomic) BOOL needsTextRecognition;
@property (nonatomic) CGSize originalAttachedSize; // ivar: _originalAttachedSize
@property (weak, nonatomic) NSObject<TSKPencilAnnotationStorage> *parentStorage; // ivar: _parentStorage
@property (readonly, nonatomic) *CGPath path; // ivar: _path
@property (readonly, nonatomic) TSUColor *penColor; // ivar: _penColor
@property (nonatomic) CGFloat pencilAnnotationDrawingScale; // ivar: _pencilAnnotationDrawingScale
@property (nonatomic) CGFloat percentOfPAContainedInParentRep; // ivar: _percentOfPAContainedInParentRep
@property (readonly, nonatomic) TSUImage *rasterizedImage;
@property (readonly, nonatomic) TSPData *rasterizedImageTSPData; // ivar: _rasterizedImageTSPData
@property (nonatomic) CGRect renderedFrame; // ivar: _renderedFrame
@property (readonly, nonatomic) BOOL shouldInvertStretchAxis;
@property (readonly, nonatomic) BOOL shouldResizeInOneDirection;
@property (readonly, nonatomic) BOOL shouldResizeWithAnchor;
@property (readonly, nonatomic) BOOL shouldShowAnchorRect;
@property (readonly, nonatomic) BOOL shouldSplitAcrossAnchorRects;
@property (readonly, nonatomic) BOOL shouldUseHeadTail;
@property (nonatomic) CGRect strokePointsFrame; // ivar: _strokePointsFrame
@property (retain, nonatomic) NSArray *subStorages; // ivar: _subStorages
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger textBaselinesTouchedCount; // ivar: _textBaselinesTouchedCount
@property (readonly, nonatomic) NSInteger toolType; // ivar: _toolType
@property (readonly, nonatomic) CGAffineTransform transformFromStrokeToUnscaledCanvas;
@property (readonly, nonatomic) CGAffineTransform transformFromUnscaledCanvasToStroke;
@property (nonatomic) CGRect unscaledBoundsOfStrokes; // ivar: _unscaledBoundsOfStrokes
@property (readonly, nonatomic) TSUBezierPath *unscaledPath;
@property (readonly, nonatomic) CGRect unscaledRenderedFrame;
@property (readonly, nonatomic) CGRect unscaledStrokePointsFrame;
@property (nonatomic) NSUInteger visibleStrokesCount; // ivar: _visibleStrokesCount


+(id)p_rasterizedTSPDataForPencilAnnotationImage:(id)arg0 context:(id)arg1 ;
-(BOOL)isStretchableParagraphAnnotation;
-(BOOL)p_isSubStorage;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromSOSWithContext:(id)arg0 markupOffset:(struct CGPoint )arg1 rasterizedImageTSPData:(id)arg2 attachedLocation:(NSInteger)arg3 attachedType:(NSInteger)arg4 encodedDrawing:(id)arg5 legacyEncodedDrawing:(id)arg6 path:(struct CGPath *)arg7 unscaledBoundsOfStrokes:(struct CGRect )arg8 originalAttachedSize:(struct CGSize )arg9 percentOfPAContainedInParentRep:(CGFloat)arg10 textBaselinesTouchedCount:(NSUInteger)arg11 visibleStrokesCount:(NSUInteger)arg12 penColor:(id)arg13 toolType:(NSInteger)arg14 compoundAnnotationType:(NSInteger)arg15 subStorages:(id)arg16 creationDate:(id)arg17 pencilAnnotationDrawingScale:(CGFloat)arg18 strokePointsFrame:(struct CGRect )arg19 renderedFrame:(struct CGRect )arg20 ;
-(id)initWithContext:(id)arg0 drawing:(id)arg1 markupOffset:(struct CGPoint )arg2 rasterizedImage:(id)arg3 attachedLocation:(NSInteger)arg4 attachedType:(NSInteger)arg5 path:(struct CGPath *)arg6 unscaledBoundsOfStrokes:(struct CGRect )arg7 originalAttachedSize:(struct CGSize )arg8 percentOfPAContainedInParentRep:(CGFloat)arg9 textBaselinesTouchedCount:(NSUInteger)arg10 visibleStrokesCount:(NSUInteger)arg11 penColor:(id)arg12 toolType:(NSInteger)arg13 compoundAnnotationType:(NSInteger)arg14 subStorages:(id)arg15 creationDate:(id)arg16 pencilAnnotationDrawingScale:(CGFloat)arg17 ;
-(id)initWithContext:(id)arg0 drawing:(id)arg1 markupOffset:(struct CGPoint )arg2 rasterizedImageTSPData:(id)arg3 attachedLocation:(NSInteger)arg4 attachedType:(NSInteger)arg5 encodedDrawing:(id)arg6 legacyEncodedDrawing:(id)arg7 path:(struct CGPath *)arg8 unscaledBoundsOfStrokes:(struct CGRect )arg9 originalAttachedSize:(struct CGSize )arg10 percentOfPAContainedInParentRep:(CGFloat)arg11 textBaselinesTouchedCount:(NSUInteger)arg12 visibleStrokesCount:(NSUInteger)arg13 penColor:(id)arg14 toolType:(NSInteger)arg15 compoundAnnotationType:(NSInteger)arg16 subStorages:(id)arg17 creationDate:(id)arg18 pencilAnnotationDrawingScale:(CGFloat)arg19 strokePointsFrame:(struct CGRect )arg20 renderedFrame:(struct CGRect )arg21 ;
-(struct CGPoint )convertStrokeToUnscaledCanvasPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )convertUnscaledCanvasToStrokePoint:(struct CGPoint )arg0 ;
-(struct CGRect )convertStrokeRectToUnscaledCanvas:(struct CGRect )arg0 ;
-(struct CGRect )convertUnscaledCanvasToStrokeRect:(struct CGRect )arg0 ;
-(struct CGSize )convertStrokeToUnscaledCanvasSize:(struct CGSize )arg0 ;
-(struct CGSize )convertUnscaledCanvasToStrokeSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)initializeTextRecognition;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif