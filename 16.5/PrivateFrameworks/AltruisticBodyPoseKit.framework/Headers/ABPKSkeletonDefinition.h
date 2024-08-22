// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKSKELETONDEFINITION_H
#define ABPKSKELETONDEFINITION_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface ABPKSkeletonDefinition : NSObject {
    NSArray *_jointNames;
    vector<long, std::allocator<long>> _jointParentIndicesVector;
    map<long, std::vector<long>, std::less<long>, std::allocator<std::pair<const long, std::vector<long>>>> _parentsToChildIndicesMap;
    NSDictionary *_jointNamesToIndices;
}


@property (readonly, nonatomic) NSUInteger jointCount;
@property (readonly, nonatomic) NSArray *parentChildOrder; // ivar: _parentChildOrder
@property (readonly, nonatomic) NSInteger rootJointIndex; // ivar: _rootJointIndex


+(id)computeParentChildOrderFor:(*void)arg0 withRoot:(NSInteger)arg1 ;
-(NSInteger)indexOfJointWithName:(id)arg0 ;
-(NSInteger)parentJoint:(NSInteger)arg0 ;
-(id)getChildrenIndices:(NSInteger)arg0 ;
-(id)init;
-(id)initWithPlist:(id)arg0 fromBundle:(id)arg1 ;
-(id)initWithType:(int)arg0 ;
-(id)jointName:(NSInteger)arg0 ;
-(void)enumerateChildrenJointIndicesOfJointAtIndex:(NSInteger)arg0 withBlock:(id)arg1 ;


@end


#endif