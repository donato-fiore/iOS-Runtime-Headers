// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTESINVERNESSCLIENTOBJC_H
#define ICNOTESINVERNESSCLIENTOBJC_H

@class CKContainer, NSString;

#import <Foundation/Foundation.h>


@interface ICNotesInvernessClientObjc : NSObject {
    ? localURLString;
}


@property (nonatomic, readonly) CKContainer *container; // ivar: container
@property (nonatomic, readonly) NSInteger environment; // ivar: environment
@property (nonatomic, readonly) NSString *localURLString;


-(id)init;
-(id)initWithContainer:(id)arg0 environment:(NSInteger)arg1 localURLString:(id)arg2 ;
-(void)didCompleteInstallOrUpdateWithPreviousBuildNumber:(id)arg0 previousVersion:(id)arg1 currentBuildNumber:(id)arg2 currentVersion:(id)arg3 platformName:(id)arg4 continuationToken:(id)arg5 callback:(id)arg6 ;
-(void)runGarbageCollectorWithProgress:(id)arg0 callback:(id)arg1 ;
-(void)sendMentionNotificationWithRecipientUserId:(id)arg0 senderName:(id)arg1 noteTitle:(id)arg2 mentionSnippet:(id)arg3 shareRecordName:(id)arg4 shareOwnerUserId:(id)arg5 noteRecordName:(id)arg6 inlineAttachmentRecordName:(id)arg7 callback:(id)arg8 ;


@end


#endif