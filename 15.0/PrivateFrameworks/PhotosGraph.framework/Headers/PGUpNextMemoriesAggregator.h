// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGUPNEXTMEMORIESAGGREGATOR_H
#define PGUPNEXTMEMORIESAGGREGATOR_H

@class NSMutableArray, NSMutableSet;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGUpNextMemoriesAggregator : NSObject

@property (retain, nonatomic) NSMutableArray *acceptedMemories; // ivar: _acceptedMemories
@property (readonly, nonatomic) BOOL gateOnUserFeedback; // ivar: _gateOnUserFeedback
@property (readonly, nonatomic) NSMutableSet *keyAssetLocalIdentifiers; // ivar: _keyAssetLocalIdentifiers
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly, nonatomic) NSMutableSet *lowercaseTitles; // ivar: _lowercaseTitles


-(BOOL)addUpNextMemory:(id)arg0 debugInfo:(*id)arg1 ;
-(id)initWithLowercaseTitles:(id)arg0 keyAssetLocalIdentifiers:(id)arg1 gateOnUserFeedback:(BOOL)arg2 loggingConnection:(id)arg3 ;


@end


#endif