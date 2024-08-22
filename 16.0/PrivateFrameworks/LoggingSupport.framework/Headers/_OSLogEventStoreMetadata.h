// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSLOGEVENTSTOREMETADATA_H
#define _OSLOGEVENTSTOREMETADATA_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "_OSLogEventStoreTimeRef.h"

@interface _OSLogEventStoreMetadata : NSObject {
    _OSLogEventStoreTimeRef" _ttls;
}


@property (readonly, nonatomic) NSUUID *archiveUUID; // ivar: _archiveUUID
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *end; // ivar: _end
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestHighVolume; // ivar: _oldestHighVolume
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestLive; // ivar: _oldestLive
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestPersist; // ivar: _oldestPersist
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestSignpost; // ivar: _oldestSignpost
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestSpecial; // ivar: _oldestSpecial
@property (readonly, nonatomic) NSUUID *sourceUUID; // ivar: _sourceUUID


-(id)initWithCollection:(id)arg0 localStorePlist:(id)arg1 liveDataDescriptor:(int)arg2 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)timeRefForTTLClass:(unsigned char)arg0 ;


@end


#endif