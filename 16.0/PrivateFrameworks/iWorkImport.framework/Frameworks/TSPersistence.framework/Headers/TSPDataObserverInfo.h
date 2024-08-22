// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDATAOBSERVERINFO_H
#define TSPDATAOBSERVERINFO_H


#import <Foundation/Foundation.h>

#import "TSPData.h"

@interface TSPDataObserverInfo : NSObject {
    id *_observer;
    TSPData *_data;
    id *_completionHandler;
}


@property (readonly, nonatomic) NSUInteger options; // ivar: _options


-(BOOL)shouldClearObserverForStatus:(NSInteger)arg0 ;
-(BOOL)shouldNotifyStatus:(NSInteger)arg0 ;
-(id)init;
-(id)initWithObserver:(id)arg0 data:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)notifyWithStatus:(NSInteger)arg0 info:(id)arg1 ;


@end


#endif