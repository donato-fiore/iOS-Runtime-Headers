// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERPATH_H
#define MTRCLUSTERPATH_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRClusterPath : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSNumber *cluster; // ivar: _cluster
@property (readonly, copy, nonatomic) NSNumber *endpoint; // ivar: _endpoint


+(id)clusterPathWithEndpointID:(id)arg0 clusterID:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClusterPath:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPath:(struct ConcreteClusterPath *)arg0 ;


@end


#endif