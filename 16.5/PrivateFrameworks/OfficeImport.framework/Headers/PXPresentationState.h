// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPRESENTATIONSTATE_H
#define PXPRESENTATIONSTATE_H

@class NSMutableDictionary;
@protocol TCCancelDelegate;


#import "OCXReadState.h"
#import "OAXDrawingState.h"
#import "OAVReadState.h"
#import "OAXTableStyleCache.h"
#import "PDPresentation.h"
#import "CXNamespace.h"

@interface PXPresentationState : OCXReadState {
    NSMutableDictionary *mModelObjects;
    OAXDrawingState *mOfficeArtState;
    OAVReadState *mOAVState;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mSlideURLToIndexMap;
    PDPresentation *mTgtPresentation;
}


@property (retain, nonatomic) CXNamespace *PXPresentationMLNamespace; // ivar: mPXPresentationMLNamespace
@property (retain, nonatomic) NSObject<TCCancelDelegate> *cancelDelegate; // ivar: mCancel
@property (readonly, nonatomic) NSMutableDictionary *commentAuthorIdToIndexMap; // ivar: mCommentAuthorIdToIndexMap


+(void)setPptChartGraphicPropertyDefaultBlock:(id)arg0 ;
-(BOOL)isCancelled;
-(NSInteger)slideIndexForSlideURL:(id)arg0 ;
-(id)init;
-(id)modelObjectForLocation:(id)arg0 ;
-(id)oavState;
-(id)officeArtState;
-(id)tableStyleCache;
-(id)tgtPresentation;
-(void)resetOfficeArtState;
-(void)setModelObject:(id)arg0 forLocation:(id)arg1 ;
-(void)setSlideIndex:(NSInteger)arg0 forSlideURL:(id)arg1 ;
-(void)setTgtPresentation:(id)arg0 ;
-(void)setupNSForXMLFormat:(int)arg0 ;


@end


#endif