// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSHHMANAGEMENTCLIENT_H
#define VSHHMANAGEMENTCLIENT_H


#import <Foundation/Foundation.h>


@interface VSHHManagementClient : NSObject



+(id)sharedInstance;
-(BOOL)isExistingAccessoryId:(id)arg0 ;
-(void)cleanUnknownAccessoriesPreferences;


@end


#endif