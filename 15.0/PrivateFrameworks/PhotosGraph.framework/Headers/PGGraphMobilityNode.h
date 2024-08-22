// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHMOBILITYNODE_H
#define PGGRAPHMOBILITYNODE_H

@class NSString, MANodeFilter;
@protocol MAUniquelyIdentifiableNode;


#import "PGGraphPropertylessNode.h"

@interface PGGraphMobilityNode : PGGraphPropertylessNode <MAUniquelyIdentifiableNode>

 {
    NSString *_label;
}


@property (readonly, nonatomic) NSUInteger mobilityType;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;


+(NSUInteger)mobilityTypeForMobilityLabel:(id)arg0 ;
+(id)filter;
-(id)initWithLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;
-(unsigned short)domain;


@end


#endif