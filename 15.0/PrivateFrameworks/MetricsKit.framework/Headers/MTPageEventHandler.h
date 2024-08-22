// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPAGEEVENTHANDLER_H
#define MTPAGEEVENTHANDLER_H

@class NSMutableArray;
@protocol MTPageEventHandlerDelegate;


#import "MTStandardEventHandler.h"

@interface MTPageEventHandler : MTStandardEventHandler

@property (weak, nonatomic) NSObject<MTPageEventHandlerDelegate> *delegate;
@property (retain, nonatomic) NSMutableArray *trackedPageHistory; // ivar: _trackedPageHistory


-(id)eventType;
-(id)eventVersion:(id)arg0 ;
-(id)knownFields;
-(id)pageHistory:(id)arg0 ;
-(void)didCreateMetricsData:(id)arg0 ;
-(void)updatePageHistoryWithPage:(id)arg0 ;


@end


#endif