// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBASICINFORMATIONCLUSTERCAPABILITYMINIMASTRUCT_H
#define MTRBASICINFORMATIONCLUSTERCAPABILITYMINIMASTRUCT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRBasicInformationClusterCapabilityMinimaStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *caseSessionsPerFabric; // ivar: _caseSessionsPerFabric
@property (copy, nonatomic) NSNumber *subscriptionsPerFabric; // ivar: _subscriptionsPerFabric


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif