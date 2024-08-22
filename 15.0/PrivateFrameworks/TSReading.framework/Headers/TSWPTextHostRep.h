// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTEXTHOSTREP_H
#define TSWPTEXTHOSTREP_H

@class NSString, NSArray;
@protocol TSDContainerRep, TSWPTextEditingHostRep, TSKHighlightArrayControllerProtocol, TSKSearchReference, TSDContainerInfo;


#import "TSDRep.h"
#import "TSWPShapeRep.h"
#import "TSKHighlightArrayController.h"

@interface TSWPTextHostRep : TSDRep <TSDContainerRep, TSWPTextEditingHostRep, TSKHighlightArrayControllerProtocol>

 {
    TSWPShapeRep *_editingRep;
}


@property (retain, nonatomic) NSObject<TSKSearchReference> *activeSearchReference; // ivar: _activeSearchReference
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSKHighlightArrayController *highlightArrayController; // ivar: _highlightArrayController
@property (retain, nonatomic) TSKHighlightArrayController *pulseArrayController; // ivar: _pulseArrayController
@property (retain, nonatomic) NSArray *searchReferences; // ivar: _searchReferences
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useFindOverlayers;


-(BOOL)canSelectChildRep:(id)arg0 ;
-(BOOL)doesRepContainSearchReference:(id)arg0 ;
-(id)childReps;
-(id)hitRep:(struct CGPoint )arg0 ;
-(id)imageForSearchReference:(id)arg0 forPath:(struct CGPath *)arg1 shouldPulsate:(BOOL)arg2 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)lineSearchReferencesForSearchReference:(id)arg0 ;
-(id)overlayLayers;
-(struct CGPath *)newPathForSearchReference:(id)arg0 ;
-(void)addAdditionalChildLayersToArray:(id)arg0 ;
-(void)dealloc;
-(void)drawTextBackground:(struct CGContext *)arg0 insetRect:(struct CGRect )arg1 pulsating:(BOOL)arg2 ;
-(void)p_activeFindHighlightChangedNotification:(id)arg0 ;
-(void)p_findUIStateChangedNotification:(id)arg0 ;
-(void)pulseAnimationDidStop:(id)arg0 ;
-(void)selectChildRep:(id)arg0 ;
-(void)setPulseControllerActive:(BOOL)arg0 autohide:(BOOL)arg1 ;
-(void)tswpTextEditingDidEndEditing:(id)arg0 ;
-(void)updateChildrenFromLayout;
-(void)updateFindAnimationWithAnimatingPulse:(BOOL)arg0 ;
-(void)updateHighlights;
-(void)willBeRemoved;


@end


#endif