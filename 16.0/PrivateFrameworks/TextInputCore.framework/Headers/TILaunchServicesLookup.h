// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TILAUNCHSERVICESLOOKUP_H
#define TILAUNCHSERVICESLOOKUP_H

@class NSArray, NSString, NSDate;
@protocol TIKeyboardActivityObserving;

#import <Foundation/Foundation.h>


@interface TILaunchServicesLookup : NSObject <TIKeyboardActivityObserving>



@property (retain, nonatomic) NSArray *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastCacheUpdate; // ivar: _lastCacheUpdate
@property (readonly) Class superclass;


+(id)genreIDsForApplicationIdentifier:(id)arg0 ;
+(id)lookupAppNames;
+(id)sharedInstance;
+(void)disableForTesting:(BOOL)arg0 ;
+(void)enumerateInstalledApplicationNames:(id)arg0 ;
-(id)appNames;
-(id)init;
-(id)tryCache;
-(void)cacheNames:(id)arg0 ;
-(void)dealloc;
-(void)enumerateAppNames:(id)arg0 ;
-(void)handleMemoryPressureLevel:(NSUInteger)arg0 excessMemoryInBytes:(NSUInteger)arg1 ;
-(void)keyboardActivityDidTransition:(id)arg0 ;


@end


#endif