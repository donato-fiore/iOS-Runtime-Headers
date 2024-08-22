// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDOMNODELIST_H
#define IKDOMNODELIST_H

@class NSString, NSArray;
@protocol IKDOMObserver, IKJSDOMNodeList;


#import "IKJSObject.h"
#import "IKDOMNode.h"

@interface IKDOMNodeList : IKJSObject <IKDOMObserver, IKJSDOMNodeList>



@property (retain, nonatomic) IKDOMNode *contextNode; // ivar: _contextNode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *evaluationBlock; // ivar: _evaluationBlock
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger length;
@property (copy, nonatomic) NSArray *nodes; // ivar: _nodes
@property (readonly) Class superclass;


+(id)nodeListWithAppContext:(id)arg0 contextNode:(id)arg1 xpath:(id)arg2 ;
-(id)initWithAppContext:(id)arg0 contextNode:(id)arg1 evaluationBlock:(id)arg2 ;
-(id)item:(NSInteger)arg0 ;
-(void)_updateNodes;
-(void)domDidUpdateForContextNode:(id)arg0 ;


@end


#endif