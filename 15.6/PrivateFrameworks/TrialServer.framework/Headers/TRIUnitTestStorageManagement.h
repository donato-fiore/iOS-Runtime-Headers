// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIUNITTESTSTORAGEMANAGEMENT_H
#define TRIUNITTESTSTORAGEMANAGEMENT_H

@protocol TRIStorageManagementProtocol;

#import <Foundation/Foundation.h>


@interface TRIUnitTestStorageManagement : NSObject <TRIStorageManagementProtocol>





-(BOOL)requestTrialStorageResetOnNextLaunch;


@end


#endif