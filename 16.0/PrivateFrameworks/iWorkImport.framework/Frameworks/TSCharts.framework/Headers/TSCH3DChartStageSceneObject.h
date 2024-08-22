// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTSTAGESCENEOBJECT_H
#define TSCH3DCHARTSTAGESCENEOBJECT_H



#import "TSCH3DSceneObject.h"

@interface TSCH3DChartStageSceneObject : TSCH3DSceneObject {
    TSCH3DSceneObject *_main;
}




+(id)objectWithMain:(id)arg0 ;
-(id)initWithMain:(id)arg0 ;
-(void)getBounds:(id)arg0 ;
-(void)getSceneObjectElementsBounds:(id)arg0 ;
-(void)getSelectionKnobsPositions:(id)arg0 ;
-(void)postGetBounds:(id)arg0 ;
-(void)postrender:(id)arg0 ;
-(void)prerender:(id)arg0 ;
-(void)rayPick:(id)arg0 ;
-(void)render:(id)arg0 ;
-(void)renderScene:(id)arg0 usingProcessor:(id)arg1 block:(id)arg2 ;


@end


#endif