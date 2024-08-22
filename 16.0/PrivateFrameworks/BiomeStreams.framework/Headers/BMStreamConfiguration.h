// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSTREAMCONFIGURATION_H
#define BMSTREAMCONFIGURATION_H

@class NSArray, BMStoreConfig, NSString;

#import <Foundation/Foundation.h>

#import "BMStreamSyncPolicy.h"

@interface BMStreamConfiguration : NSObject

@property (readonly, nonatomic) NSArray *alternativeNames; // ivar: _alternativeNames
@property (readonly, nonatomic) Class eventClass; // ivar: _eventClass
@property (readonly, nonatomic) BMStoreConfig *storeConfig; // ivar: _storeConfig
@property (readonly, nonatomic) NSString *streamIdentifier; // ivar: _streamIdentifier
@property (readonly, nonatomic) BMStreamSyncPolicy *syncPolicy; // ivar: _syncPolicy


-(id)init;
-(id)initWithStreamIdentifier:(id)arg0 eventClass:(Class)arg1 storeConfig:(id)arg2 syncPolicy:(id)arg3 alternativeNames:(id)arg4 ;


@end


#endif