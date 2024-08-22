// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDATADOWNLOADOBSERVERINFO_H
#define TSPDATADOWNLOADOBSERVERINFO_H



#import "TSPDataObserverInfo.h"

@interface TSPDataDownloadObserverInfo : TSPDataObserverInfo



-(BOOL)shouldClearObserverForStatus:(NSInteger)arg0 ;
-(BOOL)shouldNotifyStatus:(NSInteger)arg0 ;
-(id)initWithDownloadObserver:(id)arg0 data:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif