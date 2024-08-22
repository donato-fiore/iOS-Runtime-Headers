// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTAPPINTENTSPROVIDER_H
#define MTAPPINTENTSPROVIDER_H

@protocol _TtP18MobileTimerSupport27MTAppIntentsManagerDelegate_, MTAppIntentsProviderDelegate;

#import <Foundation/Foundation.h>

#import "_TtC18MobileTimerSupport19MTAppIntentsManager.h"

@interface MTAppIntentsProvider : NSObject <_TtP18MobileTimerSupport27MTAppIntentsManagerDelegate_>



@property (weak, nonatomic) NSObject<MTAppIntentsProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _TtC18MobileTimerSupport19MTAppIntentsManager *manager; // ivar: _manager


+(id)sharedInstance;
-(id)init;
-(void)didSelectTabWithManager:(id)arg0 tab:(NSInteger)arg1 ;


@end


#endif