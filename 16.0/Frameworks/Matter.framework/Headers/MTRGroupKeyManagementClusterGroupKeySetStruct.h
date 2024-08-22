// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRGROUPKEYMANAGEMENTCLUSTERGROUPKEYSETSTRUCT_H
#define MTRGROUPKEYMANAGEMENTCLUSTERGROUPKEYSETSTRUCT_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRGroupKeyManagementClusterGroupKeySetStruct : NSObject

@property (retain, nonatomic) NSData *epochKey0; // ivar: _epochKey0
@property (retain, nonatomic) NSData *epochKey1; // ivar: _epochKey1
@property (retain, nonatomic) NSData *epochKey2; // ivar: _epochKey2
@property (retain, nonatomic) NSNumber *epochStartTime0; // ivar: _epochStartTime0
@property (retain, nonatomic) NSNumber *epochStartTime1; // ivar: _epochStartTime1
@property (retain, nonatomic) NSNumber *epochStartTime2; // ivar: _epochStartTime2
@property (retain, nonatomic) NSNumber *groupKeySecurityPolicy; // ivar: _groupKeySecurityPolicy
@property (retain, nonatomic) NSNumber *groupKeySetID; // ivar: _groupKeySetID


-(id)description;
-(id)init;


@end


#endif