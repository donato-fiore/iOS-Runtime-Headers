// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSSCENETAXONOMYHIERARCHYNODE_H
#define CLSSCENETAXONOMYHIERARCHYNODE_H

@class PFSceneTaxonomy, NSString, NSSet;

#import <Foundation/Foundation.h>


@interface CLSSceneTaxonomyHierarchyNode : NSObject {
    *void _taxonomyNodeRef;
    PFSceneTaxonomy *_sceneTaxonomy;
}


@property (readonly) unsigned int identifier;
@property (readonly) BOOL isIndexed;
@property (readonly) NSString *localizedName;
@property (readonly) NSSet *localizedSynonyms;
@property (readonly) NSString *name;


-(id)initWithSceneTaxonomyNodeRef:(*void)arg0 inSceneTaxonomy:(id)arg1 ;
-(void)traverseChildrenUsingNameBlock:(id)arg0 ;
-(void)visitChildrenUsingNameBlock:(id)arg0 ;
-(void)visitParentsUsingNameBlock:(id)arg0 ;


@end


#endif