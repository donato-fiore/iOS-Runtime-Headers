// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXSTORYANALYTICSSESSIONINFO_H
#define _PXSTORYANALYTICSSESSIONINFO_H

@protocol CPAnalyticsEventProtocol;

#import <Foundation/Foundation.h>


@interface _PXStoryAnalyticsSessionInfo : NSObject

@property (readonly, nonatomic) NSInteger appSuspensionCount; // ivar: _appSuspensionCount
@property (retain, nonatomic) NSObject<CPAnalyticsEventProtocol> *endEvent; // ivar: _endEvent
@property (readonly, nonatomic) NSInteger pauseCount; // ivar: _pauseCount
@property (retain, nonatomic) NSObject<CPAnalyticsEventProtocol> *startEvent; // ivar: _startEvent


-(id)initWithEvent:(id)arg0 ;
-(void)didPauseWithEvent:(id)arg0 ;
-(void)didSuspendAppWithEvent:(id)arg0 ;
-(void)finalizeWithEvent:(id)arg0 ;


@end


#endif