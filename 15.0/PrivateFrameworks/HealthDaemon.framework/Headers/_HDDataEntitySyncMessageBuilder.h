// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDDATAENTITYSYNCMESSAGEBUILDER_H
#define _HDDATAENTITYSYNCMESSAGEBUILDER_H

@class NSArray;
@protocol HDSyncMessageHandler;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDataProvenanceCache.h"
#import "HDEntityEncoder.h"

@interface _HDDataEntitySyncMessageBuilder : NSObject {
    HDProfile *_profile;
    Class _entityClass;
    ? _entityVersion;
    HDDataProvenanceCache *_provenanceCache;
    HDEntityEncoder *_entityEncoder;
    id<HDSyncMessageHandler> *_messageHandler;
    NSInteger _maxEncodedBytesPerChangeSet;
    NSInteger _maxEncodedBytesPerChange;
    NSInteger _totalEncodedBytes;
    NSInteger _currentEncodedBytes;
    NSInteger _lastEntityAnchor;
    NSInteger _sequence;
    BOOL _hasEncodedAnyObject;
    BOOL _didSendFinal;
}


@property (readonly, copy, nonatomic) NSArray *orderedProperties;


-(BOOL)finishAndFlushWithError:(*id)arg0 ;
-(NSInteger)addEntity:(id)arg0 row:(struct HDSQLiteRow *)arg1 anchor:(NSInteger)arg2 error:(*id)arg3 ;
-(id)description;
-(id)init;
-(id)initWithProfile:(id)arg0 transaction:(id)arg1 entityClass:(Class)arg2 version:(struct ? )arg3 provenanceCache:(id)arg4 encodingOptions:(id)arg5 messageHandler:(id)arg6 bytesPerChangeSet:(NSInteger)arg7 bytesPerChange:(NSInteger)arg8 ;


@end


#endif