// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMAUTOMATIONMESSAGESEND_H
#define IMAUTOMATIONMESSAGESEND_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMAutomationMessageSend : NSObject

@property (retain, nonatomic) NSMutableSet *pendingSendGUIDs; // ivar: _pendingSendGUIDs
@property (retain, nonatomic) NSMutableDictionary *sentMessageInfo; // ivar: _sentMessageInfo


-(id)appendFilePathsWithGUIDs:(id)arg0 withText:(id)arg1 ;
-(id)clearAttachmentsUploadedToCloudkit;
-(id)copyFilePathsToTmpLocation:(id)arg0 ;
-(id)createIMMessageToSendWithMessage:(id)arg0 filePaths:(id)arg1 bundleID:(id)arg2 attributionInfoName:(id)arg3 isAudioMessage:(BOOL)arg4 threadIdentifier:(id)arg5 ;
-(id)deleteAttachmentWithMessageGUID:(id)arg0 andFilePathIndex:(NSInteger)arg1 ;
-(id)dictionaryFromGUID:(id)arg0 ;
-(id)fileSizeForMessageGUID:(id)arg0 withFilePathIndex:(NSInteger)arg1 ;
-(id)init;
-(id)loadHighResolutionFileForMessageGUID:(id)arg0 withFilePathIndex:(NSInteger)arg1 ;
-(id)sendIMMessage:(id)arg0 chat:(id)arg1 timeOut:(CGFloat)arg2 resultDict:(id)arg3 error:(*id)arg4 ;
-(id)sendMessage:(id)arg0 destinationID:(id)arg1 filePaths:(id)arg2 groupID:(id)arg3 bundleID:(id)arg4 attributionInfoName:(id)arg5 service:(id)arg6 timeOut:(CGFloat)arg7 error:(*id)arg8 ;
-(id)sendMessage:(id)arg0 destinationID:(id)arg1 filePaths:(id)arg2 groupID:(id)arg3 service:(id)arg4 timeOut:(CGFloat)arg5 error:(*id)arg6 ;
-(id)sendMessage:(id)arg0 destinationID:(id)arg1 filePaths:(id)arg2 isAudioMessage:(BOOL)arg3 groupID:(id)arg4 bundleID:(id)arg5 attributionInfoName:(id)arg6 service:(id)arg7 timeOut:(CGFloat)arg8 threadIdentifier:(id)arg9 error:(*id)arg10 ;
-(id)sendMessage:(id)arg0 destinationID:(id)arg1 timeOut:(CGFloat)arg2 threadIdentifier:(id)arg3 error:(*id)arg4 ;
-(id)uploadAttachmentToCloudkitWithMessageGUID:(id)arg0 andFilePathIndex:(NSInteger)arg1 ;
-(void)deleteTmpFilePath:(id)arg0 ;


@end


#endif