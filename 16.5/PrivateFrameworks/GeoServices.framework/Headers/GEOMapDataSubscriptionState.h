// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPDATASUBSCRIPTIONSTATE_H
#define GEOMAPDATASUBSCRIPTIONSTATE_H

@class NSProgress, NSError, NSString;
@protocol GEOXPCSerializable;

#import <Foundation/Foundation.h>


@interface GEOMapDataSubscriptionState : NSObject <GEOXPCSerializable>

 {
    os_unfair_lock_s _lock;
    NSInteger _loadState;
    NSProgress *_progress;
    NSError *_lastError;
    NSUInteger _dataCount;
    NSUInteger _dataSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSProgress *downloadProgress;
@property (readonly, nonatomic) NSUInteger downloadedDataCount;
@property (readonly, nonatomic) NSUInteger downloadedDataSize;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSError *lastError;
@property (readonly, nonatomic) NSInteger loadState;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)_commonInit;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif