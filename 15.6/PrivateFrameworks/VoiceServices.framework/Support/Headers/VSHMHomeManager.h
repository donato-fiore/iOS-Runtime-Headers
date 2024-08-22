// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSHMHOMEMANAGER_H
#define VSHMHOMEMANAGER_H


#import <Foundation/Foundation.h>


@interface VSHMHomeManager : NSObject



+(id)init;
+(id)sharedInstance;
-(void)transferPreinstallErrorMessagesOfLanguage:(id)arg0 voiceName:(id)arg1 forAccessoryID:(id)arg2 ;


@end


#endif