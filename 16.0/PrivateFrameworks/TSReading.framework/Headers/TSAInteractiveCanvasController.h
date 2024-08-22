// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAINTERACTIVECANVASCONTROLLER_H
#define TSAINTERACTIVECANVASCONTROLLER_H

@class TSAAnnotationController;


#import "TSWPInteractiveCanvasController.h"
#import "TSDDrawableInfo.h"

@interface TSAInteractiveCanvasController : TSWPInteractiveCanvasController

@property (readonly, nonatomic) TSAAnnotationController *annotationController; // ivar: _annotationController
@property (retain, nonatomic) TSDDrawableInfo *infoBeingDragInserted; // ivar: mInfoBeingDragInserted
@property (readonly, nonatomic) BOOL supportsAnnotations; // ivar: _supportsAnnotations
@property (readonly, nonatomic) BOOL wantsCanvasReferenceController;


-(BOOL)hasEmptyWPSelection;
-(BOOL)hasInspectableSelection;
-(BOOL)requiresSimilarInfos;
-(BOOL)wantsHyperlinkGestureRecognizer;
-(id)additionalVisibleInfosForCanvas:(id)arg0 ;
-(id)p_activeTextRep;
-(void)asyncProcessChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)dealloc;
-(void)didSetDocumentToMode:(NSInteger)arg0 fromMode:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)handleHyperlinkGesture:(id)arg0 ;
-(void)loadDocument;
-(void)selectAll:(id)arg0 ;
-(void)teardown;
-(void)unloadDocument;
-(void)willSetDocumentToMode:(NSInteger)arg0 fromMode:(NSInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif