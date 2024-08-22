// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCLYRICSREPORTINGCONTROLLER_H
#define MPCLYRICSREPORTINGCONTROLLER_H

@class NSString;
@protocol ICEnvironmentMonitorObserver;

#import <Foundation/Foundation.h>

#import "MPCReportingPlaybackObserver.h"

@interface MPCLyricsReportingController : NSObject <ICEnvironmentMonitorObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPCReportingPlaybackObserver *reportingPlaybackObserver; // ivar: _reportingPlaybackObserver
@property (readonly) Class superclass;


-(id)init;
-(void)environmentMonitorDidChangeNetworkType:(id)arg0 ;
-(void)recordLyricsViewEvent:(id)arg0 ;


@end


#endif