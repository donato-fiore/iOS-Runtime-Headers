// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLACCOUNTINGNODEMANAGER_H
#define PLACCOUNTINGNODEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLAccountingNodeManager : NSObject

@property (retain) NSMutableDictionary *nodeIDToNodeName; // ivar: _nodeIDToNodeName
@property (retain) NSMutableDictionary *nodeNameToNodeID; // ivar: _nodeNameToNodeID


+(id)sharedInstance;
-(id)childNodeIDsFromChildNodeNames:(id)arg0 ;
-(id)init;
-(id)nodeIDForNodeName:(id)arg0 isPermanent:(BOOL)arg1 ;
-(id)nodeNameForNodeID:(id)arg0 ;
-(void)removeNodeReferenceFromCache:(id)arg0 ;
-(void)setupNodes;


@end


#endif