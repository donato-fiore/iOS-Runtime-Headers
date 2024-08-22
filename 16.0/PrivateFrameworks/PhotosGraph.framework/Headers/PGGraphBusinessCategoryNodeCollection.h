// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHBUSINESSCATEGORYNODECOLLECTION_H
#define PGGRAPHBUSINESSCATEGORYNODECOLLECTION_H

@class NSSet;


#import "PGGraphNodeCollection.h"
#import "PGGraphBusinessNodeCollection.h"

@interface PGGraphBusinessCategoryNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphBusinessNodeCollection *businessNodes;
@property (readonly) NSSet *categories;


+(Class)nodeClass;
+(id)businessCategoryNodesForCategories:(id)arg0 inGraph:(id)arg1 ;
+(id)businessCategoryNodesForCategory:(id)arg0 inGraph:(id)arg1 ;


@end


#endif