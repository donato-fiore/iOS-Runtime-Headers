// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUASSETEXPLORERANALYTICS_H
#define PUASSETEXPLORERANALYTICS_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface PUAssetExplorerAnalytics : NSObject {
    NSMutableSet *_eventsSent;
}




-(id)init;
-(void)sendEvent:(id)arg0 view:(NSUInteger)arg1 source:(NSUInteger)arg2 currentAssetCount:(NSInteger)arg3 ;


@end


#endif