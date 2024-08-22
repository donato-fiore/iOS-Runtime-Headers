// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18MOBILETIMERSUPPORT19MTAPPINTENTSMANAGER_H
#define _TTC18MOBILETIMERSUPPORT19MTAPPINTENTSMANAGER_H

@protocol _TtP18MobileTimerSupport27MTAppIntentsManagerDelegate_;

#import <Foundation/Foundation.h>


@interface _TtC18MobileTimerSupport19MTAppIntentsManager : NSObject

@property (nonatomic, weak) NSObject<_TtP18MobileTimerSupport27MTAppIntentsManagerDelegate_> *delegate; // ivar: delegate


+(id)sharedManager;
-(id)init;
-(void)didSelectTabWithTab:(NSInteger)arg0 ;


@end


#endif