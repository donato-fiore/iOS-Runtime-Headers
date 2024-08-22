// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPATTRIBUTEPATH_H
#define CHIPATTRIBUTEPATH_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPAttributePath : NSObject

@property (readonly, nonatomic) NSNumber *attribute; // ivar: _attribute
@property (readonly, nonatomic) NSNumber *cluster; // ivar: _cluster
@property (readonly, nonatomic) NSNumber *endpoint; // ivar: _endpoint


+(id)attributePathWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 ;
-(id)initWithPath:(*void)arg0 ;


@end


#endif