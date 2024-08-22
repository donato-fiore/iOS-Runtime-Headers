// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSOSUTILITIES_H
#define CKSOSUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKSOSUtilities : NSObject

@property (readonly, nonatomic, getter=isMMSEnabled) BOOL MMSEnabled;


+(id)sharedUtilities;
+(void)sendMessage:(id)arg0 location:(id)arg1 recipients:(id)arg2 ;
+(void)sendMessage:(id)arg0 location:(id)arg1 recipients:(id)arg2 failureHandler:(id)arg3 ;
-(BOOL)__im_ff_chatCacheEnabled;
-(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
-(id)_sendMessageAndReturnGUIDs:(id)arg0 ;
-(id)_uniqueFilePathForFilename:(id)arg0 ;
-(id)sendComposition:(id)arg0 toConversation:(id)arg1 useStandalone:(BOOL)arg2 ;
-(void)_sendMessageAndObserveNotification:(id)arg0 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 location:(id)arg1 recipients:(id)arg2 ;
-(void)sendMessage:(id)arg0 location:(id)arg1 recipients:(id)arg2 failureHandler:(id)arg3 ;


@end


#endif