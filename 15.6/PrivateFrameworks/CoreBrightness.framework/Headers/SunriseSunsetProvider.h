// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUNRISESUNSETPROVIDER_H
#define SUNRISESUNSETPROVIDER_H

@class _CDClientContext, _CDContextualKeyPath, _CDContextualChangeRegistration, NSDictionary, _CDContextualPredicate;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface SunriseSunsetProvider : NSObject {
    _CDClientContext *_duetContextStore;
    _CDContextualKeyPath *_duetKeyPath;
    _CDContextualChangeRegistration *_duetRegistration;
    NSDictionary *_duetInfo;
    NSObject<OS_dispatch_semaphore> *_duetDispatchSemaphore;
    BOOL _sunriseSunsetNotificationEnabled;
    id *_callbackBlock;
    id *_duetCallback;
    _CDContextualPredicate *_predicate;
}


@property int logLevel; // ivar: _logLevel


-(id)copySunriseSunsetInfo:(int)arg0 ;
-(id)copySunsetSunriseInfoFromContext;
-(id)initWithCallback:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)registerBlock:(id)arg0 ;
-(void)unregisterBlock;
-(void)unregisterNotification;
-(void)updateSunriseSunsetInfo;


@end


#endif