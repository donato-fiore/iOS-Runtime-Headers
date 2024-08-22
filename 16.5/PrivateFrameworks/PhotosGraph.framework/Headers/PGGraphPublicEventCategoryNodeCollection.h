// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHPUBLICEVENTCATEGORYNODECOLLECTION_H
#define PGGRAPHPUBLICEVENTCATEGORYNODECOLLECTION_H



#import "PGGraphNodeCollection.h"
#import "PGGraphPublicEventNodeCollection.h"

@interface PGGraphPublicEventCategoryNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphPublicEventNodeCollection *publicEventNodes;


+(Class)nodeClass;
+(id)publicEventCategoryNodesForCategories:(id)arg0 inGraph:(id)arg1 ;
+(id)publicEventCategoryNodesForCategory:(id)arg0 inGraph:(id)arg1 ;


@end


#endif