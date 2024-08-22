// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRATTRIBUTEPATH_H
#define MTRATTRIBUTEPATH_H

@class NSNumber;


#import "MTRClusterPath.h"

@interface MTRAttributePath : MTRClusterPath

@property (readonly, copy, nonatomic) NSNumber *attribute; // ivar: _attribute


+(id)attributePathWithEndpointID:(id)arg0 clusterID:(id)arg1 attributeID:(id)arg2 ;
+(id)attributePathWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAttributePath:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPath:(*void)arg0 ;


@end


#endif