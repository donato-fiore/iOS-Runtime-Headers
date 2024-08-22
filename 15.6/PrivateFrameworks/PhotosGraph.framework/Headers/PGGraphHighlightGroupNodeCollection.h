// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHHIGHLIGHTGROUPNODECOLLECTION_H
#define PGGRAPHHIGHLIGHTGROUPNODECOLLECTION_H



#import "PGGraphHighlightNodeCollection.h"
#import "PGGraphHighlightTypeNodeCollection.h"

@interface PGGraphHighlightGroupNodeCollection : PGGraphHighlightNodeCollection

@property (readonly, nonatomic) PGGraphHighlightNodeCollection *highlightNodes;
@property (readonly, nonatomic) PGGraphHighlightTypeNodeCollection *typeNodes;


+(Class)nodeClass;
+(id)highlightGroupNodesForUUIDs:(id)arg0 inGraph:(id)arg1 ;
-(id)highlightGroupNodes;
-(id)momentNodes;


@end


#endif