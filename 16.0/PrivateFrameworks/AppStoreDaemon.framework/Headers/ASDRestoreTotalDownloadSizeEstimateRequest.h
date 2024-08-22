// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDRESTORETOTALDOWNLOADSIZEESTIMATEREQUEST_H
#define ASDRESTORETOTALDOWNLOADSIZEESTIMATEREQUEST_H


#import <Foundation/Foundation.h>

#import "ASDRestoreService.h"

@interface ASDRestoreTotalDownloadSizeEstimateRequest : NSObject {
    ASDRestoreService *_restoreService;
}




-(id)init;
-(void)startWithCompletionHandler:(id)arg0 ;


@end


#endif