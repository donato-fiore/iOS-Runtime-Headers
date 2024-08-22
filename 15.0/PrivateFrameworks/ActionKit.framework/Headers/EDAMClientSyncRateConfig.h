// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMCLIENTSYNCRATECONFIG_H
#define EDAMCLIENTSYNCRATECONFIG_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMClientSyncRateConfig : FATObject

@property (retain, nonatomic) NSNumber *syncStateIntervalMillis; // ivar: _syncStateIntervalMillis
@property (retain, nonatomic) NSNumber *updateNoteDuringEditIntervalMillis; // ivar: _updateNoteDuringEditIntervalMillis
@property (retain, nonatomic) NSNumber *updateNoteWhenIdleForMillis; // ivar: _updateNoteWhenIdleForMillis


+(id)structFields;
+(id)structName;


@end


#endif