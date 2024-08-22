// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMMOTIONALARMMANAGER_H
#define CMMOTIONALARMMANAGER_H

@class NSString;
@protocol CMMotionAlarmDelegateProtocol;

#import <Foundation/Foundation.h>


@interface CMMotionAlarmManager : NSObject

@property (nonatomic) NSObject<CMMotionAlarmDelegateProtocol> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(BOOL)isAvailable;
+(id)defaultManager;
-(BOOL)acknowledgeAlarm:(id)arg0 error:(*id)arg1 ;
-(BOOL)acknowledgeAlarmWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)launchRemoteAppWithError:(*id)arg0 ;
-(BOOL)registerAlarmWithName:(id)arg0 type:(unsigned int)arg1 duration:(unsigned int)arg2 repeats:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)unregisterAlarm:(id)arg0 error:(*id)arg1 ;
-(BOOL)unregisterAlarmWithName:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(void)dealloc;


@end


#endif