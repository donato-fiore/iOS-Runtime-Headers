// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNADDITIONALPAGECONTENTREP_H
#define TNADDITIONALPAGECONTENTREP_H



#import "TNPageContentRep.h"

@interface TNAdditionalPageContentRep : TNPageContentRep



-(BOOL)directlyManagesLayerContent;
-(BOOL)forcesPlacementOnTop;
-(BOOL)masksToBounds;
-(NSUInteger)pageIndex;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(struct CGRect )clipRect;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)processChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)willBeRemoved;


@end


#endif