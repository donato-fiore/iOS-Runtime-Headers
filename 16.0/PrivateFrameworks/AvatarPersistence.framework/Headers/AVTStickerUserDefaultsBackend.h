// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSTICKERUSERDEFAULTSBACKEND_H
#define AVTSTICKERUSERDEFAULTSBACKEND_H

@class NSURL, NSString, NSMutableArray, NSUserDefaults;
@protocol AVTStickerBackend, AVTUILogger, AVTStickerBackendDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVTStickerUserDefaultsBackend : NSObject <AVTStickerBackend>



@property (readonly, nonatomic) NSURL *cacheLocation; // ivar: _cacheLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger frequencyCounter; // ivar: _frequencyCounter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (weak, nonatomic) NSObject<AVTStickerBackendDelegate> *stickerBackendDelegate; // ivar: _stickerBackendDelegate
@property (retain, nonatomic) NSMutableArray *stickers; // ivar: _stickers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)addNextFrequencyCountToFrequencySum:(id)arg0 ;
-(id)fetchAllStickers;
-(id)fetchMostRecentStickersWithLimit:(NSUInteger)arg0 ;
-(id)fetchStickersWithAvatarIdentifier:(id)arg0 stickerIdentifier:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 environment:(id)arg1 userDefaults:(id)arg2 ;
-(id)nextFrequencyCount;
-(id)recentStickersForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)stickersIndexesMatchingAvatarIdentifier:(id)arg0 stickerIdentifier:(id)arg1 ;
-(void)_recentStickersChangedExternally;
-(void)addStickerWithAvatarIdentifier:(id)arg0 stickerIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)deleteRecentStickersForChangeTracker:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteRecentStickersWithAvatarIdentifier:(id)arg0 stickerIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)didUseStickerWithAvatarIdentifier:(id)arg0 stickerIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)getStickersFromUserDefaults;
-(void)saveStickersToUserDefaults;
-(void)updateStickerAtIndex:(NSUInteger)arg0 ;


@end


#endif