// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYBACKLINKMONITORFILTERCACHEOPERATION_H
#define SYBACKLINKMONITORFILTERCACHEOPERATION_H



#import "SYBacklinkMonitorOperation.h"

@interface SYBacklinkMonitorFilterCacheOperation : SYBacklinkMonitorOperation



-(NSInteger)type;
-(void)_finishProcessingAndNotify;
-(void)_searchBacklinksForInputUserActivity;
-(void)_updateBacklinkFilterCacheWithInfos:(id)arg0 ;


@end


#endif