// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRGROUPKEYMANAGEMENTCLUSTERGROUPINFOMAPSTRUCT_H
#define MTRGROUPKEYMANAGEMENTCLUSTERGROUPINFOMAPSTRUCT_H

@class NSArray, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRGroupKeyManagementClusterGroupInfoMapStruct : NSObject

@property (retain, nonatomic) NSArray *endpoints; // ivar: _endpoints
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSNumber *groupId; // ivar: _groupId
@property (retain, nonatomic) NSString *groupName; // ivar: _groupName


-(id)description;
-(id)init;


@end


#endif