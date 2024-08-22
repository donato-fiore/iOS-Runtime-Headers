// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPGROUPKEYMANAGEMENTCLUSTERGROUPKEYSETSTRUCT_H
#define CHIPGROUPKEYMANAGEMENTCLUSTERGROUPKEYSETSTRUCT_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPGroupKeyManagementClusterGroupKeySetStruct : NSObject

@property (retain, nonatomic) NSData *epochKey0; // ivar: _epochKey0
@property (retain, nonatomic) NSData *epochKey1; // ivar: _epochKey1
@property (retain, nonatomic) NSData *epochKey2; // ivar: _epochKey2
@property (retain, nonatomic) NSNumber *epochStartTime0; // ivar: _epochStartTime0
@property (retain, nonatomic) NSNumber *epochStartTime1; // ivar: _epochStartTime1
@property (retain, nonatomic) NSNumber *epochStartTime2; // ivar: _epochStartTime2
@property (retain, nonatomic) NSNumber *groupKeySecurityPolicy; // ivar: _groupKeySecurityPolicy
@property (retain, nonatomic) NSNumber *groupKeySetID; // ivar: _groupKeySetID


-(id)init;


@end


#endif