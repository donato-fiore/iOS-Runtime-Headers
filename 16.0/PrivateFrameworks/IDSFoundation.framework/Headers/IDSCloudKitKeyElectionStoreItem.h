// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSCLOUDKITKEYELECTIONSTOREITEM_H
#define IDSCLOUDKITKEYELECTIONSTOREITEM_H

@class ENGroupID, NSString;

#import <Foundation/Foundation.h>


@interface IDSCloudKitKeyElectionStoreItem : NSObject

@property (retain, nonatomic) ENGroupID *groupID; // ivar: _groupID
@property (retain, nonatomic) NSString *groupName; // ivar: _groupName


-(id)description;


@end


#endif