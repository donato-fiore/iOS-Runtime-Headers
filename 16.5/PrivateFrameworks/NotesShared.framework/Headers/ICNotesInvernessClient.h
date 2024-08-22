// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTESINVERNESSCLIENT_H
#define ICNOTESINVERNESSCLIENT_H


#import <Foundation/Foundation.h>

#import "ICNotesInvernessClientObjc.h"

@interface ICNotesInvernessClient : NSObject

@property (retain, nonatomic) ICNotesInvernessClientObjc *objcClient; // ivar: _objcClient


-(id)initWithContainer:(id)arg0 ;
-(void)didCompleteInstallOrUpdateWithPreviousBuildNumber:(id)arg0 previousVersion:(id)arg1 currentBuildNumber:(id)arg2 currentVersion:(id)arg3 platformName:(id)arg4 continuationToken:(id)arg5 callback:(id)arg6 ;
-(void)runGarbageCollectorWithProgress:(id)arg0 callback:(id)arg1 ;
-(void)sendMentionNotificationWithRecipientUserId:(id)arg0 senderName:(id)arg1 noteTitle:(id)arg2 mentionSnippet:(id)arg3 shareRecordName:(id)arg4 shareOwnerUserId:(id)arg5 noteRecordName:(id)arg6 inlineAttachmentRecordName:(id)arg7 callback:(id)arg8 ;


@end


#endif