// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACSIGNPOSTLOG_H
#define CACSIGNPOSTLOG_H


#import <Foundation/Foundation.h>


@interface CACSignPostLog : NSObject

@property (nonatomic) NSUInteger currentPerfID; // ivar: _currentPerfID


+(id)_sFetchElementsLog;
+(id)sharedInstance;
+(id)sharedLog;
+(void)CommandStringExecuted:(id)arg0 success:(BOOL)arg1 ;
+(void)CommandStringReceived:(id)arg0 ;
+(void)FetchElementsEventBeganWithReason:(id)arg0 expectedDelay:(CGFloat)arg1 ;
+(void)FetchElementsEventCompletedWithNumberOfElements:(NSUInteger)arg0 numberOfElementsAlreadyCached:(NSUInteger)arg1 ;


@end


#endif