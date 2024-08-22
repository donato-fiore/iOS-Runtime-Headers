// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFMEDIASERVICEMANAGER_H
#define HFMEDIASERVICEMANAGER_H

@class NSMutableDictionary, NSHashTable;

#import <Foundation/Foundation.h>


@interface HFMediaServiceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToDefaultServiceMapping; // ivar: _homeIdentifierToDefaultServiceMapping
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToMediaServicesMapping; // ivar: _homeIdentifierToMediaServicesMapping
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToReadRequestInFlightMapping; // ivar: _homeIdentifierToReadRequestInFlightMapping
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToRefreshNeededMapping; // ivar: _homeIdentifierToRefreshNeededMapping
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers


+(id)sharedManager;
-(BOOL)_isReadRequestInFlightForHome:(id)arg0 ;
-(BOOL)isRefreshNeededForHome:(id)arg0 ;
-(id)_defaultMediaServiceForHome:(id)arg0 ;
-(id)_fetchDefaultMediaServiceForHome:(id)arg0 ;
-(id)_mediaServicesForHome:(id)arg0 ;
-(id)defaultMediaServiceForHome:(id)arg0 ;
-(id)fetchMediaServicesForHome:(id)arg0 ;
-(id)init;
-(id)mediaServicesForHome:(id)arg0 ;
-(id)removeMediaService:(id)arg0 forHome:(id)arg1 ;
-(id)updateDefaultMediaService:(id)arg0 forHome:(id)arg1 ;
-(id)updateProperty:(id)arg0 forHome:(id)arg1 withOptions:(id)arg2 ;
-(void)_dispatchMessageToObserversWithBlock:(id)arg0 ;
-(void)addMediaServiceManagerObserver:(id)arg0 ;
-(void)removeMediaServiceManagerObserver:(id)arg0 ;


@end


#endif