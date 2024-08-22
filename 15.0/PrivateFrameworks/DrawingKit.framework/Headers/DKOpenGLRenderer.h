// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKOPENGLRENDERER_H
#define DKOPENGLRENDERER_H

@class UIColor;
@protocol DKOpenGLRendererDelegate;

#import <Foundation/Foundation.h>


@interface DKOpenGLRenderer : NSObject {
    BOOL _didNotifyRendererDelegate;
    int mBufferSize;
    unsigned int mWetPaintProg;
    unsigned int mDryPaintProg;
    unsigned int mCompositeProg;
    unsigned int mTextureProg;
    unsigned int mColorProg;
    unsigned int mAttributes;
    unsigned int mVbo;
    _NSRange mVertexRange;
    ? mContiguousVertexStorage;
    vector<VertexGroup, std::allocator<VertexGroup>> mVertexHistory;
    vector<std::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>, std::allocator<std::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>>> mNonCollisionSegments;
    ? U_COLOR;
    vector<Page, std::allocator<Page>> mPages;
    unsigned int mWetPaintBufferFBO;
    unsigned int mWetPaintBufferT;
    ? mWetPaintBufferSize;
    BOOL mSharedContext;
    BOOL mPaperTexIsShared;
    unsigned int mPaperTex;
    ? mWinSize;
    ? mCanvasSize;
    ? mCanvasOffset;
    float mTime;
    float mTimeWetBecameDirty;
    float mParticleLifespan;
    CGRect mDirtyCanvasRegion;
    int mCompositeProgViewportUniformLocation;
    int mCompositeColorUniformLocation;
    int mWetPaintProgTimeUniformLocation;
    int mWetPaintProgSubtractEndPointsOnlyUniformLocation;
    int mWetPaintProgLifespanUniformLocation;
    int mDryPaintProgXCoordOffsetUniformLocation;
    int mColorProgColorUniformLocation;
    int mColorProgModelViewProjectionUniformLocation;
    int mTextureProgModelViewProjectionUniformLocation;
}


@property (nonatomic) BOOL allowWetComposite; // ivar: _allowWetComposite
@property (nonatomic) CGFloat backingScale; // ivar: _backingScale
@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (weak, nonatomic) NSObject<DKOpenGLRendererDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL drawingEnabled; // ivar: _drawingEnabled
@property (nonatomic) BOOL ignoreFirstUndoItem; // ivar: _ignoreFirstUndoItem
@property (retain, nonatomic) UIColor *inkColor; // ivar: _inkColor
@property (nonatomic) CGFloat lineWidthScale; // ivar: _lineWidthScale
@property (nonatomic) NSInteger numPages; // ivar: _numPages
@property (nonatomic, getter=isUndoEnabled) BOOL undoEnabled; // ivar: _undoEnabled


-(?)updateVertexControllerWithData:(?)arg0 rangeallowWet;
-(BOOL)canvasIsEmpty;
-(BOOL)detectCollision;
-(BOOL)initGL;
-(id)init;
-(id)initWithBounds:(struct CGRect )arg0 scale:(CGFloat)arg1 ;
-(id)initWithBounds:(struct CGRect )arg0 scale:(CGFloat)arg1 bufferSize:(int)arg2 sharedContext:(BOOL)arg3 ;
-(id)snapshotImage;
-(struct CGRect )getVertexBounds;
-(struct CGRect )regionWithVertices:(struct vector<Vertex, std::allocator<Vertex>> )arg0 withInflationAmount:(float)arg1 ;
-(void)addPoints:(id)arg0 withSegmentLength:(NSUInteger)arg1 ;
-(void)appendVertexHistoryElement;
-(void)clear;
-(void)clearComposite;
-(void)clearDryPaintBuffer;
-(void)clearWetPaintBuffer;
-(void)dealloc;
-(void)destroyFrameBuffers;
-(void)didBeginNewStroke;
-(void)didCompleteStroke;
-(void)didResize;
-(void)draw;
-(void)drawComposite;
-(void)drawContiguousVertexStorageImmediatelyWithLayeredBlending:(BOOL)arg0 ;
-(void)initializeFrameBuffers;
-(void)redrawEntireDrawingImmediatelyWithLayeredBlending:(BOOL)arg0 ;
-(void)removeVertexHistoryElement;
-(void)renderToComposite:(BOOL)arg0 ;
-(void)renderToDryPaintBuffer;
-(void)renderToWetPaintBufferWithRange:(struct _NSRange )arg0 ;
-(void)resetRendererState;
-(void)teardown;
-(void)undo;
-(void)update;
-(void)updateDryCycleIncludingComposite:(BOOL)arg0 ;
-(void)updateDryForcefully;
-(void)updateVertexControllerWithDataRange:(struct _NSRange )arg0 allowWet:(BOOL)arg1 ;
-(void)updateWet;


@end


#endif