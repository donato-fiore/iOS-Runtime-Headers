// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRGROUPKEYMANAGEMENTCLUSTERGROUPINFOMAPSTRUCT_H
#define MTRGROUPKEYMANAGEMENTCLUSTERGROUPINFOMAPSTRUCT_H

@class NSArray, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRGroupKeyManagementClusterGroupInfoMapStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *endpoints; // ivar: _endpoints
@property (copy, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (copy, nonatomic) NSNumber *groupId; // ivar: _groupId
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif