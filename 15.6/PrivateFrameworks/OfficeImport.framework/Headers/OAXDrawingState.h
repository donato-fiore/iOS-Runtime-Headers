// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAXDRAWINGSTATE_H
#define OAXDRAWINGSTATE_H

@class NSMutableDictionary, NSMutableArray;


#import "OCXReadState.h"
#import "OAXClient.h"
#import "OCPPackagePart.h"
#import "OADStyleMatrix.h"
#import "OAXTableStyleCache.h"
#import "OADBlipCollection.h"
#import "OAVReadState.h"
#import "OADColorScheme.h"
#import "OADColorMap.h"
#import "OADFontScheme.h"
#import "CXNamespace.h"

@interface OAXDrawingState : OCXReadState {
    OAXClient *mClient;
    OCPPackagePart *mPackagePart;
    OADStyleMatrix *mStyleMatrix;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mDrawableIdToVmlShapeIdMap;
    OADBlipCollection *mTgtBlipCollection;
    NSMutableArray *mTgtBulletBlips;
    OAVReadState *mOavState;
    OADColorScheme *mColorScheme;
    OADColorMap *mColorMap;
    OADFontScheme *mFontScheme;
    NSMutableArray *mGroupStack;
}


@property (retain, nonatomic) CXNamespace *OAXChart2012Namespace; // ivar: mOAXChart2012Namespace
@property (retain, nonatomic) CXNamespace *OAXChartDrawingNamespace; // ivar: mOAXChartDrawingNamespace
@property (retain, nonatomic) CXNamespace *OAXChartNamespace; // ivar: mOAXChartNamespace
@property (retain, nonatomic) CXNamespace *OAXCompatNamespace; // ivar: mOAXCompatNamespace
@property (retain, nonatomic) CXNamespace *OAXDrawing2010Namespace; // ivar: mOAXDrawing2010Namespace
@property (retain, nonatomic) CXNamespace *OAXLockedCanvasNamespace; // ivar: mOAXLockedCanvasNamespace
@property (retain, nonatomic) CXNamespace *OAXMainNamespace; // ivar: mOAXMainNamespace
@property (retain, nonatomic) CXNamespace *OAXMathNamespace; // ivar: mOAXMathNamespace
@property (retain, nonatomic) CXNamespace *OAXPictureNamespace; // ivar: mOAXPictureNamespace
@property (retain, nonatomic) CXNamespace *OAXTableNamespace; // ivar: mOAXTableNamespace
@property (retain, nonatomic) CXNamespace *OAXWordProcessingMLNamespace; // ivar: mOAXWordProcessingMLNamespace
@property (copy, nonatomic) id *clientChartGraphicPropertyDefaultsBlock; // ivar: _clientChartGraphicPropertyDefaultsBlock
@property (weak) id *documentState; // ivar: mDocumentState
@property (retain, nonatomic) NSMutableDictionary *sourceURLToTargetBlipIndexMap; // ivar: mSrcURLToTgtBlipIndexMap
@property (retain, nonatomic) NSMutableDictionary *sourceURLToTargetBulletBlipIndexMap; // ivar: mSrcURLToTgtBulletBlipIndexMap


-(BOOL)isInsideGroup;
-(id)appVersion;
-(id)blipRefForURL:(id)arg0 ;
-(id)blipRefWithURL:(id)arg0 blipArray:(id)arg1 blipURLtoIndexMap:(id)arg2 ;
-(id)bulletBlipRefForURL:(id)arg0 ;
-(id)client;
-(id)colorMap;
-(id)colorScheme;
-(id)drawableForShapeId:(unsigned int)arg0 ;
-(id)fontScheme;
-(id)init;
-(id)initWithClient:(id)arg0 ;
-(id)oavState;
-(id)packagePart;
-(id)peekGroup;
-(id)popGroup;
-(id)styleMatrix;
-(id)tableStyleCache;
-(id)targetBlipCollection;
-(id)vmlShapeIdForDrawableId:(unsigned int)arg0 ;
-(void)clearTargetBlipCollection;
-(void)pushGroup:(id)arg0 ;
-(void)replaceGroupStack:(id)arg0 ;
-(void)resetForNewDrawing;
-(void)setColorMap:(id)arg0 ;
-(void)setColorScheme:(id)arg0 ;
-(void)setDrawable:(id)arg0 forShapeId:(unsigned int)arg1 ;
-(void)setFontScheme:(id)arg0 ;
-(void)setOavState:(id)arg0 ;
-(void)setPackagePart:(id)arg0 ;
-(void)setStyleMatrix:(id)arg0 ;
-(void)setTableStyleCache:(id)arg0 ;
-(void)setTargetBlipCollection:(id)arg0 ;
-(void)setTargetBulletBlipArray:(id)arg0 ;
-(void)setVmlShapeId:(id)arg0 forDrawableId:(unsigned int)arg1 ;
-(void)setupNSForXMLFormat:(int)arg0 ;


@end


#endif