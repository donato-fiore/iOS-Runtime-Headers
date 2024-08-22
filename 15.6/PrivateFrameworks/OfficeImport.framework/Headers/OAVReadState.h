// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAVREADSTATE_H
#define OAVREADSTATE_H

@class NSMutableDictionary, NSMutableSet;


#import "OCXReadState.h"
#import "OCPPackagePart.h"
#import "OAXDrawingState.h"

@interface OAVReadState : OCXReadState {
    Class mClient;
    OCPPackagePart *mPackagePart;
    NSMutableDictionary *mShapeTypes;
    NSMutableDictionary *mShapeIdMap;
    NSMutableSet *mDualDrawables;
}


@property (weak) OAXDrawingState *oaxState; // ivar: mOAXState


-(BOOL)isDualDrawable:(id)arg0 ;
-(Class)client;
-(id)blipRefForURL:(id)arg0 ;
-(id)drawableForVmlShapeId:(id)arg0 ;
-(id)initWithClient:(Class)arg0 packagePart:(id)arg1 ;
-(id)packagePart;
-(unsigned int)officeArtShapeIdWithVmlShapeId:(id)arg0 ;
-(unsigned short)shapeTypeForId:(id)arg0 ;
-(void)addDualDrawable:(id)arg0 ;
-(void)resetForNewDrawing;
-(void)setDrawable:(id)arg0 forVmlShapeId:(id)arg1 ;
-(void)setPackagePart:(id)arg0 ;
-(void)setShapeType:(unsigned short)arg0 forId:(id)arg1 ;


@end


#endif