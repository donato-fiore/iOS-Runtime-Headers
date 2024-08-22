// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCLOUDKITHISTORYANALYZEROPTIONS_H
#define PFCLOUDKITHISTORYANALYZEROPTIONS_H



#import "PFHistoryAnalyzerOptions.h"
#import "NSCloudKitMirroringRequest.h"

@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions {
    BOOL _includePrivateTransactions;
    NSCloudKitMirroringRequest *_request;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif