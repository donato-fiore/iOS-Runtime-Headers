// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOREFERENCETIMEMANAGER_H
#define GEOREFERENCETIMEMANAGER_H

@class geo_isolater, NSString;
@protocol GEOConfigChangeListenerDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "GEOReferenceTimeData.h"

@interface GEOReferenceTimeManager : NSObject <GEOConfigChangeListenerDelegate>

 {
    GEOReferenceTimeData *_refTimeData;
    geo_isolater *_iso;
    NSObject<OS_dispatch_semaphore> *_syncSem;
    BOOL _synchronized;
    BOOL _IsGeod;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)_didKernBootTimeChange;
-(BOOL)_initFromPersistence;
-(BOOL)synchronized;
-(CGFloat)_referenceTime;
-(CGFloat)bestReferenceTime;
-(id)_initInternal;
-(id)_retrievePersistedBasisRefTimeData;
-(void)_kernBootTimeResult:(id)arg0 ;
-(void)_persistBasisRefTimeData:(id)arg0 ;
-(void)_startTimedSync;
-(void)_syncWithTimed;
-(void)dealloc;
-(void)referenceTimeResult:(id)arg0 ;
-(void)valueChangedForGEOConfigKey:(struct ? )arg0 ;


@end


#endif