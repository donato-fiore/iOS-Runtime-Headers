// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRGROUPKEYMANAGEMENTCLUSTERGROUPKEYSETSTRUCT_H
#define MTRGROUPKEYMANAGEMENTCLUSTERGROUPKEYSETSTRUCT_H

@class NSData, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRGroupKeyManagementClusterGroupKeySetStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSData *epochKey0; // ivar: _epochKey0
@property (copy, nonatomic) NSData *epochKey1; // ivar: _epochKey1
@property (copy, nonatomic) NSData *epochKey2; // ivar: _epochKey2
@property (copy, nonatomic) NSNumber *epochStartTime0; // ivar: _epochStartTime0
@property (copy, nonatomic) NSNumber *epochStartTime1; // ivar: _epochStartTime1
@property (copy, nonatomic) NSNumber *epochStartTime2; // ivar: _epochStartTime2
@property (copy, nonatomic) NSNumber *groupKeySecurityPolicy; // ivar: _groupKeySecurityPolicy
@property (copy, nonatomic) NSNumber *groupKeySetID; // ivar: _groupKeySetID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif