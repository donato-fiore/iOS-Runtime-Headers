// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGBASECABACKDROPLAYER_H
#define FIGBASECABACKDROPLAYER_H

@class CABackdropLayer;
@protocol FigPiPableLayer;



@interface FigBaseCABackdropLayer : CABackdropLayer <FigPiPableLayer>



@property (nonatomic) BOOL preventsChangesToSublayerHierarchy; // ivar: _preventsChangesToSublayerHierarchy


+(id)defaultActionForKey:(id)arg0 ;
-(id)actionForKey:(id)arg0 ;
-(id)init;
-(void)addSublayer:(id)arg0 ;
-(void)insertSublayer:(id)arg0 above:(id)arg1 ;
-(void)insertSublayer:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)insertSublayer:(id)arg0 below:(id)arg1 ;
-(void)removeFromSuperlayer;
-(void)replaceSublayer:(id)arg0 with:(id)arg1 ;
-(void)setSublayers:(id)arg0 ;


@end


#endif