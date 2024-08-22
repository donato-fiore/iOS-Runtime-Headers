// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVSCENETAXONOMYNODE_H
#define PVSCENETAXONOMYNODE_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>

#import "PVSceneTaxonomy.h"

@interface PVSceneTaxonomyNode : NSObject {
    *void _nodeRef;
}


@property (readonly, copy) NSSet *children;
@property (readonly, copy) NSSet *detectors;
@property (readonly) CGFloat graphHighPrecisionThreshold;
@property (readonly) CGFloat graphHighRecallThreshold;
@property (readonly) CGFloat highPrecisionThreshold;
@property (readonly) CGFloat highRecallThreshold;
@property (readonly, getter=isIndexed) BOOL indexed;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSSet *parents;
@property (readonly, getter=isRoot) BOOL root;
@property (readonly) unsigned int sceneClassId;
@property (readonly) PVSceneTaxonomy *taxonomy; // ivar: _taxonomy
@property (readonly) CGFloat threshold;


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