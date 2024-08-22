// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGBASECALAYERHOST_H
#define FIGBASECALAYERHOST_H

@class CALayerHost;



@interface FigBaseCALayerHost : CALayerHost

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