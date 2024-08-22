// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OUGROUPEDGE_H
#define OUGROUPEDGE_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OUGroupEdge : NSObject <NSCopying>



@property (retain, nonatomic) NSUUID *source_object_uuid; // ivar: source_object_uuid
@property (retain, nonatomic) NSUUID *target_object_uuid; // ivar: target_object_uuid


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif