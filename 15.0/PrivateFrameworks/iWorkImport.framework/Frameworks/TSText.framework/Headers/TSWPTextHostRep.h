// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTEXTHOSTREP_H
#define TSWPTEXTHOSTREP_H

@class TSDRep, NSString, NSArray;
@protocol TSDContainerRep, TSDContainerInfo, TSKSearchReference;


#import "TSWPShapeRep.h"

@interface TSWPTextHostRep : TSDRep <TSDContainerRep>

 {
    TSWPShapeRep *_editingRep;
}


@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<TSKSearchReference> *primaryFindResultSearchReference; // ivar: _primaryFindResultSearchReference
@property (retain, nonatomic) NSArray *searchReferences; // ivar: _searchReferences
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useFindOverlayers; // ivar: _useFindOverlayers


-(id)childReps;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(void)dealloc;
-(void)drawTextBackground:(struct CGContext *)arg0 insetRect:(struct CGRect )arg1 pulsating:(BOOL)arg2 ;
-(void)drawTextBackground:(struct CGContext *)arg0 insetRect:(struct CGRect )arg1 pulsating:(BOOL)arg2 shouldTint:(BOOL)arg3 ;
-(void)finishInit;
-(void)updateChildrenFromLayout;
-(void)willBeRemoved;


@end


#endif