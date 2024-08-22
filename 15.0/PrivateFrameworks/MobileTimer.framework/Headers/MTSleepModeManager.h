// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTSLEEPMODEMANAGER_H
#define MTSLEEPMODEMANAGER_H

@class NSString;
@protocol MTSleepModeManager;

#import <Foundation/Foundation.h>


@interface MTSleepModeManager : NSObject <MTSleepModeManager>

 {
    BOOL _enabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 isSynchronous:(BOOL)arg1 ;
-(void)checkIn;
-(void)reconnect;


@end


#endif