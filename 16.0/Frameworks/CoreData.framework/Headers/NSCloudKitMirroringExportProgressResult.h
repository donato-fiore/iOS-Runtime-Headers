// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCLOUDKITMIRRORINGEXPORTPROGRESSRESULT_H
#define NSCLOUDKITMIRRORINGEXPORTPROGRESSRESULT_H

@class NSDictionary;


#import "NSCloudKitMirroringResult.h"

@interface NSCloudKitMirroringExportProgressResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSDictionary *objectIDToLastExportedToken; // ivar: _objectIDToLastExportedToken


-(id)initWithRequest:(id)arg0 objectIDToLastExportedToken:(id)arg1 error:(id)arg2 ;
-(void)dealloc;


@end


#endif