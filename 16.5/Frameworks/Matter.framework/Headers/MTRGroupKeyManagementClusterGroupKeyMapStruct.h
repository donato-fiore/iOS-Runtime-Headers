// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRGROUPKEYMANAGEMENTCLUSTERGROUPKEYMAPSTRUCT_H
#define MTRGROUPKEYMANAGEMENTCLUSTERGROUPKEYMAPSTRUCT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRGroupKeyManagementClusterGroupKeyMapStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (copy, nonatomic) NSNumber *groupId; // ivar: _groupId
@property (copy, nonatomic) NSNumber *groupKeySetID; // ivar: _groupKeySetID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif