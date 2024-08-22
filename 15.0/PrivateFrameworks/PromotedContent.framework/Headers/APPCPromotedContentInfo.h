// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCPROMOTEDCONTENTINFO_H
#define APPCPROMOTEDCONTENTINFO_H

@class NSString;
@protocol APPCLifecycleMetricsHelping;

#import <Foundation/Foundation.h>

#import "APPCNativeRepresentation.h"

@interface APPCPromotedContentInfo : NSObject {
    ? promotedContent;
    ? ready;
}


@property (nonatomic, readonly) NSInteger desiredPosition;
@property (nonatomic, readonly) NSInteger errorReason;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BOOL isDownloadable;
@property (nonatomic, readonly) BOOL isInteractive;
@property (nonatomic, readonly) BOOL isVideo;
@property (nonatomic, readonly) NSObject<APPCLifecycleMetricsHelping> *metricsHelper; // ivar: metricsHelper
@property (nonatomic, readonly) APPCNativeRepresentation *nativeInfo;
@property (nonatomic) BOOL placeholder; // ivar: placeholder
@property (nonatomic, readonly) id *ready;
@property (nonatomic) NSInteger unfilledReason; // ivar: unfilledReason


-(id)init;
-(void)dealloc;


@end


#endif