// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXACTIONCRITERIAWORLDSTATE_H
#define ATXACTIONCRITERIAWORLDSTATE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface ATXActionCriteriaWorldState : NSObject {
    BOOL _fake;
    NSDate *_now;
    ? _flags;
    ? _have;
}


@property (nonatomic) BOOL airDropCapability;
@property (nonatomic) BOOL airplaneMode;
@property (nonatomic) BOOL coreRoutineCapability;
@property (nonatomic) BOOL doNotDisturb;
@property (nonatomic) BOOL greenTeaDeviceCapability;
@property (nonatomic) BOOL internalBuild;
@property (nonatomic) BOOL lockScreen;
@property (copy, nonatomic) NSDate *now;
@property (nonatomic) BOOL telephonyCapability;


-(id)init;
-(id)initFake;
-(id)propertyWhitelist;


@end


#endif