// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRSCENESCLUSTEREXTENSIONFIELDSET_H
#define MTRSCENESCLUSTEREXTENSIONFIELDSET_H

@class NSArray, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRScenesClusterExtensionFieldSet : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *attributeValueList; // ivar: _attributeValueList
@property (copy, nonatomic) NSNumber *clusterID; // ivar: _clusterID
@property (copy, nonatomic) NSNumber *clusterId;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif