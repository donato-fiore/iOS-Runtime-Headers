// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNMOMENTPROCESSOR_H
#define VNMOMENTPROCESSOR_H


#import <Foundation/Foundation.h>

#import "VNMPContext.h"

@interface VNMomentProcessor : NSObject

@property (retain, nonatomic) VNMPContext *context; // ivar: _context


+(id)sortImageDescriptorsChronologically:(id)arg0 ;
-(id)computeClusteringForClusteringTree:(id)arg0 intoKGroups:(int)arg1 error:(*id)arg2 ;
-(id)computeClusteringForClusteringTree:(id)arg0 usingThreshold:(float)arg1 error:(*id)arg2 ;
-(id)computeClusteringOfImageDescriptors:(id)arg0 intoKGroups:(int)arg1 error:(*id)arg2 ;
-(id)computeClusteringTreeForImageDescriptors:(id)arg0 assumeDescriptorsAreSorted:(BOOL)arg1 error:(*id)arg2 ;
-(id)computeClusteringTreeForImageDescriptors:(id)arg0 error:(*id)arg1 ;
-(id)computeNaturalClusteringForClusteringTree:(id)arg0 error:(*id)arg1 ;
-(id)computeNaturalClusteringOfImageDescriptors:(id)arg0 error:(*id)arg1 ;
-(id)convertClusterNodesListToDescriptorsList:(struct vector<MPClusteringTreeNode *, std::allocator<MPClusteringTreeNode *>> )arg0 ;
-(id)getKey:(id)arg0 fromDictionary:(id)arg1 withDefault:(id)arg2 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)performClustersPostprocessing:(id)arg0 error:(*id)arg1 ;


@end


#endif