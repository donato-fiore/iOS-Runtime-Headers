// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTGROUPBYCHANGEDELAYEDNOTIFICATION_H
#define TSTGROUPBYCHANGEDELAYEDNOTIFICATION_H


#import <Foundation/Foundation.h>

#import "TSTGroupNode.h"

@interface TSTGroupByChangeDelayedNotification : NSObject

@property (retain, nonatomic) TSTGroupNode *groupNode; // ivar: _groupNode
@property (nonatomic) int notifyType; // ivar: _notifyType
@property (nonatomic) TSKUIDStruct rowUID; // ivar: _rowUID


-(id)description;
-(id)initWithNotifyType:(int)arg0 group:(id)arg1 ;
-(id)initWithNotifyType:(int)arg0 group:(id)arg1 rowUid:(struct TSKUIDStruct )arg2 ;
-(void)sendToDistributor:(id)arg0 ;


@end


#endif