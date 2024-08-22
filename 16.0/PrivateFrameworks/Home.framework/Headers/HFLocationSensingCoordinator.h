// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFLOCATIONSENSINGCOORDINATOR_H
#define HFLOCATIONSENSINGCOORDINATOR_H

@class NSString, NSUserDefaults, NAFuture;
@protocol HFLocationManagerObserver, HFLocationSensingCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "HFLocationManagerDispatcher.h"

@interface HFLocationSensingCoordinator : NSObject <HFLocationManagerObserver>



@property (nonatomic) BOOL cachedHomeSensingValue; // ivar: _cachedHomeSensingValue
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (nonatomic) int defaultsChangedNotifyToken; // ivar: _defaultsChangedNotifyToken
@property (weak, nonatomic) NSObject<HFLocationSensingCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL homeSensingEnabled;
@property (retain, nonatomic) NAFuture *homeSensingFirstFuture; // ivar: _homeSensingFirstFuture
@property (retain, nonatomic) HFLocationManagerDispatcher *locationDispatcher; // ivar: _locationDispatcher
@property (readonly, nonatomic) NAFuture *locationSensingAvailableFuture;
@property (readonly) Class superclass;


-(BOOL)readHomeSensingDefault;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;


@end


#endif