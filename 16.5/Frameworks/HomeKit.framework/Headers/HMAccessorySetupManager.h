// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSETUPMANAGER_H
#define HMACCESSORYSETUPMANAGER_H

@class NSString;
@protocol HMFLogging;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMAccessorySetupManager : NSObject <HMFLogging>

 {
    _HMContext *_context;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)UUID;
+(id)logCategory;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)failAccessorySetupWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishAccessorySetupWithCompletionHandler:(id)arg0 ;
-(void)finishAccessorySetupWithSetupCompletedInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)performAccessorySetupUsingRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)resumeAccessorySetupWithUserInfo:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif