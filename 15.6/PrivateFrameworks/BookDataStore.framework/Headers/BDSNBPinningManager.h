// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BDSNBPINNINGMANAGER_H
#define BDSNBPINNINGMANAGER_H


#import <Foundation/Foundation.h>

#import "BDSServiceProxy.h"

@interface BDSNBPinningManager : NSObject

@property (retain, nonatomic) BDSServiceProxy *serviceProxy; // ivar: _serviceProxy


-(id)init;
-(id)updateReadingNowWithCompletion:(id)arg0 ;
-(id)updateWantToReadAndReadingNowWithJaliscoUpdateSuccessful:(BOOL)arg0 completion:(id)arg1 ;
-(id)updateWantToReadWithCompletion:(id)arg0 ;
-(void)audiobookStoreEnabledWithCompletion:(id)arg0 ;
-(void)fetchMostRecentAudiobookWithCompletion:(id)arg0 ;
-(void)updateBitrateForItemWithAdamID:(id)arg0 completion:(id)arg1 ;


@end


#endif