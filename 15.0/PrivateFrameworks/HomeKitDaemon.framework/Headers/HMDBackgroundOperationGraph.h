// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKGROUNDOPERATIONGRAPH_H
#define HMDBACKGROUNDOPERATIONGRAPH_H

@class HMFObject, NSString, NSMapTable;
@protocol HMFLogging;



@interface HMDBackgroundOperationGraph : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *inDegrees; // ivar: _inDegrees
@property (retain, nonatomic) NSMapTable *opGraph; // ivar: _opGraph
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)canAddEdgeFrom:(id)arg0 to:(id)arg1 ;
-(BOOL)doesCycleExist;
-(BOOL)doesVertexAlreadyExistInGraph:(id)arg0 ;
-(id)getIndepentVertices;
-(id)initWithOperations:(id)arg0 ;
-(void)addEdgeFrom:(id)arg0 to:(id)arg1 ;
-(void)addVertex:(id)arg0 ;
-(void)removeVertex:(id)arg0 ;


@end


#endif