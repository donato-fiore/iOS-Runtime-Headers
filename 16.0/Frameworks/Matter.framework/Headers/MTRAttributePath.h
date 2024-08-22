// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRATTRIBUTEPATH_H
#define MTRATTRIBUTEPATH_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRAttributePath : NSObject

@property (readonly, nonatomic) NSNumber *attribute; // ivar: _attribute
@property (readonly, nonatomic) NSNumber *cluster; // ivar: _cluster
@property (readonly, nonatomic) NSNumber *endpoint; // ivar: _endpoint


+(id)attributePathWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 ;
-(id)initWithPath:(*void)arg0 ;


@end


#endif