// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPAGGREGATEPROGRESS_H
#define FPAGGREGATEPROGRESS_H

@class NSProgress, NSMutableArray;



@interface FPAggregateProgress : NSProgress {
    NSMutableArray *_childProgresses;
}




-(void)addChild:(id)arg0 ;
-(void)cancel;
-(void)startReportingProgress;


@end


#endif