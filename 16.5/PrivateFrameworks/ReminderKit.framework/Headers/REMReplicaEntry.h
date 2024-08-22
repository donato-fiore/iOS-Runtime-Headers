// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMREPLICAENTRY_H
#define REMREPLICAENTRY_H

@protocol REMReplicaManagerClient;

#import <Foundation/Foundation.h>

#import "REMClockElementList.h"

@interface REMReplicaEntry : NSObject

@property (nonatomic) NSObject<REMReplicaManagerClient> *client; // ivar: _client
@property (retain, nonatomic) REMClockElementList *clockElementList; // ivar: _clockElementList
@property (nonatomic) BOOL inUse; // ivar: _inUse
@property (nonatomic) unsigned int replicaUUIDIndex; // ivar: _replicaUUIDIndex


-(BOOL)hasEqualPersistedPropertiesAs:(id)arg0 ;
-(id)description;
-(id)initWithEntryArchive:(*void)arg0 ;
-(id)initWithReplicaUUIDIndex:(unsigned int)arg0 clockElementList:(id)arg1 inUse:(BOOL)arg2 forClient:(id)arg3 ;
-(id)persistenceDescription;
-(void)encodeIntoEntryArchive:(*void)arg0 ;


@end


#endif