// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKMEDIAFEEDER_H
#define OKMEDIAFEEDER_H

@class NSString;
@protocol OKCollectionProxyDataSource, OKSettingsSupport, OS_dispatch_queue, OKMediaFeederDelegate;

#import <Foundation/Foundation.h>

#import "OKPresentation.h"

@interface OKMediaFeeder : NSObject <OKCollectionProxyDataSource, OKSettingsSupport>

 {
    NSObject<OS_dispatch_queue> *_processingQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OKMediaFeederDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) OKPresentation *presentation; // ivar: _presentation
@property (nonatomic) BOOL rotationEnabled; // ivar: _rotationEnabled
@property (nonatomic) NSUInteger startIndex; // ivar: _startIndex
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsLiveUpdates; // ivar: _wantsLiveUpdates


+(BOOL)isRemote;
+(BOOL)supportLiveUpdates;
// +(id)operationWithBlock:(id)arg0 cancellationBlock:(unk)arg1 completionHandler:(id)arg2  ;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)canBePersisted;
-(NSUInteger)_indexFromRotatedIndex:(NSUInteger)arg0 ;
-(NSUInteger)_numberOfMediaItems;
-(NSUInteger)_rotatedIndexFromIndex:(NSUInteger)arg0 ;
-(NSUInteger)countOfDictionaryProxy:(id)arg0 ;
-(NSUInteger)indexForMediaItem:(id)arg0 ;
-(NSUInteger)numberOfMediaItems;
-(NSUInteger)numberOfMediaObjects;
-(id)_mediaItemsForMediaURLs:(id)arg0 ;
-(id)allKeysForDictionaryProxy:(id)arg0 ;
-(id)allMediaURLs;
-(id)allObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryProxy:(id)arg0 objectAtIndexPath:(id)arg1 ;
-(id)dictionaryProxy:(id)arg0 objectForKey:(id)arg1 ;
-(id)feederSettings;
-(id)indexesForMediaObjects:(id)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)mediaItemAtIndex:(NSUInteger)arg0 ;
-(id)mediaItemsAtIndexes:(id)arg0 ;
-(id)mediaObjectURLsAtIndexes:(id)arg0 ;
-(id)mediaObjectsAtIndexes:(id)arg0 ;
-(id)mediaURLAtIndex:(NSUInteger)arg0 ;
-(id)mediaURLsAtIndexes:(id)arg0 ;
-(id)reloadData;
-(id)reloadMediaObjectsWithCompletionHandler:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)dealloc;
-(void)enumerateObjectsAtIndexes:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)performAsynchronousBarrierUsingBlock:(id)arg0 ;
// -(void)reloadDataWithProgressBlock:(id)arg0 andCompletionHandler:(unk)arg1  ;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif