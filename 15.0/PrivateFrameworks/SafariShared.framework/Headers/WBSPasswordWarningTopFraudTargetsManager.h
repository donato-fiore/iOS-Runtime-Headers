// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPASSWORDWARNINGTOPFRAUDTARGETSMANAGER_H
#define WBSPASSWORDWARNINGTOPFRAUDTARGETSMANAGER_H

@class WBSRemotePlistController;

#import <Foundation/Foundation.h>


@interface WBSPasswordWarningTopFraudTargetsManager : NSObject {
    WBSRemotePlistController *_plistController;
}




-(id)_initWithBuiltinListURL:(id)arg0 shouldAttemptToUpdateConfiguration:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)getTopFraudTargetsWithCompletionHandler:(id)arg0 ;


@end


#endif