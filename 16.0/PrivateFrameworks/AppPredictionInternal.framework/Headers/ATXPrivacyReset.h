// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPRIVACYRESET_H
#define ATXPRIVACYRESET_H


#import <Foundation/Foundation.h>


@interface ATXPrivacyReset : NSObject {
    id *_resetPrivacyWarningsNotificationToken;
}




+(id)sharedInstance;
-(BOOL)_placeholderExists;
-(id)_placeholderPath;
-(id)init;
-(void)_handlePrivacyResetNotification;
-(void)_registerForResetPrivacyWarningsNotification;
-(void)_removeAllAppActionData;
-(void)_removeAllBlendingUICaches;
-(void)_writeDeletionPlaceholder;
-(void)dealloc;


@end


#endif