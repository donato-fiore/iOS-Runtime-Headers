// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFSCENETAXONOMYNODE_H
#define PFSCENETAXONOMYNODE_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>

#import "PFSceneTaxonomy.h"

@interface PFSceneTaxonomyNode : NSObject {
    *void _nodeRef;
}


@property (readonly, copy) NSSet *children;
@property (readonly, copy) NSSet *detectors;
@property (readonly) CGFloat f0point5Threshold;
@property (readonly) CGFloat f1Threshold;
@property (readonly) CGFloat f2Threshold;
@property (readonly) CGFloat graphHighPrecisionThreshold;
@property (readonly) CGFloat graphHighRecallThreshold;
@property (readonly) CGFloat highPrecisionThreshold;
@property (readonly) CGFloat highRecallThreshold;
@property (readonly, getter=isIndexed) BOOL indexed;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSSet *parents;
@property (readonly) CGFloat precision0point6Threshold;
@property (readonly, getter=isRoot) BOOL root;
@property (readonly) unsigned int sceneClassId;
@property (readonly) CGFloat searchThreshold;
@property (readonly) PFSceneTaxonomy *taxonomy; // ivar: _taxonomy
@property (readonly, getter=searchThreshold) CGFloat threshold;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNode:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithNodeRef:(*void)arg0 taxonomy:(id)arg1 ;
-(id)localizedLabel;
-(id)localizedSynonyms;
-(void)traverse:(NSInteger)arg0 visitor:(id)arg1 ;


@end


#endif