// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKINSTALLSHEETSTATUSUPDATEREQUEST_H
#define SKINSTALLSHEETSTATUSUPDATEREQUEST_H

@class NSString;


#import "SKRequest.h"

@interface SKInstallSheetStatusUpdateRequest : SKRequest

@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)initWithAppBundleId:(id)arg0 isInstallSheetOpen:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_start;


@end


#endif