// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINFORMATIONHEURISTICREFRESHBIOMETRIGGER_H
#define ATXINFORMATIONHEURISTICREFRESHBIOMETRIGGER_H

@class BMBiomeScheduler, BPSSink;
@protocol NSSecureCoding, OS_dispatch_queue;


#import "ATXInformationHeuristicRefreshTrigger.h"

@interface ATXInformationHeuristicRefreshBiomeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding>

 {
    NSInteger _streamType;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXInformationHeuristicRefreshBiomeTrigger:(id)arg0 ;
-(NSUInteger)hash;
-(id)_publisher;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStreamType:(NSInteger)arg0 ;
-(void)_start;
-(void)_stop;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif