// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPGROUPKEYMANAGEMENTCLUSTERGROUPINFOMAPSTRUCT_H
#define CHIPGROUPKEYMANAGEMENTCLUSTERGROUPINFOMAPSTRUCT_H

@class NSArray, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CHIPGroupKeyManagementClusterGroupInfoMapStruct : NSObject

@property (retain, nonatomic) NSArray *endpoints; // ivar: _endpoints
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSNumber *groupId; // ivar: _groupId
@property (retain, nonatomic) NSString *groupName; // ivar: _groupName


-(id)init;


@end


#endif