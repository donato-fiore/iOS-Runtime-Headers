// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODEENTITYSTORE_H
#define ATXMODEENTITYSTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ATXModeMetadataConstants.h"

@interface ATXModeEntityStore : NSObject {
    NSMutableDictionary *_entityStore;
    ATXModeMetadataConstants *_modeMetadataConstants;
}




-(id)appEntityForBundleId:(id)arg0 ;
-(id)init;
-(id)initWithModeMetadataConstants:(id)arg0 ;


@end


#endif