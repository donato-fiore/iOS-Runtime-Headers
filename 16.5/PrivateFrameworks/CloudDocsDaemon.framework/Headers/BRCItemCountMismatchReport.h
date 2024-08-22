// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCITEMCOUNTMISMATCHREPORT_H
#define BRCITEMCOUNTMISMATCHREPORT_H

@class NSURL, NSError, BRMangledID;

#import <Foundation/Foundation.h>

#import "BRCItemGlobalID.h"

@interface BRCItemCountMismatchReport : NSObject {
    NSInteger _failureRetryCount;
    NSURL *_fileURL;
    BOOL _containsSharedToMeItem;
}


@property (readonly, nonatomic) NSInteger itemCountDifference; // ivar: _itemCountDifference
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID; // ivar: _itemGlobalID
@property (readonly, nonatomic) NSError *lastError; // ivar: _lastError
@property (readonly, nonatomic) BOOL wasAbleToRun; // ivar: _wasAbleToRun
@property (readonly, nonatomic) BRMangledID *zoneMangledID; // ivar: _zoneMangledID


+(void)_finishReport:(id)arg0 session:(id)arg1 completionHandler:(id)arg2 ;
+(void)generateReportForSharedFolder:(id)arg0 qualityOfService:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(id)initWithURL:(id)arg0 ;
-(id)telemetryEvent;
-(void)incrementErrorRetryCountWithSession:(id)arg0 ;
-(void)shareChangedDuringCheckWithSession:(id)arg0 ;


@end


#endif