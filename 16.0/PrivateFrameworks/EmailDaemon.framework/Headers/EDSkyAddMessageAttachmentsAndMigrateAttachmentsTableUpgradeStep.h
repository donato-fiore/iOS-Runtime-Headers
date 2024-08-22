// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSKYADDMESSAGEATTACHMENTSANDMIGRATEATTACHMENTSTABLEUPGRADESTEP_H
#define EDSKYADDMESSAGEATTACHMENTSANDMIGRATEATTACHMENTSTABLEUPGRADESTEP_H

@class NSString;
@protocol EFLoggable, EDTableUpgradeStep;

#import <Foundation/Foundation.h>


@interface EDSkyAddMessageAttachmentsAndMigrateAttachmentsTableUpgradeStep : NSObject <EFLoggable, EDTableUpgradeStep>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)createMessageAttachmentsTableWithConnection:(id)arg0 ;
+(BOOL)createNewAttachmentTableWithConnection:(id)arg0 ;
+(BOOL)createNewSearchableAttachmentsTable:(id)arg0 ;
+(BOOL)deleteAttachmentsTableWithConnection:(id)arg0 ;
+(BOOL)deleteMessageAttachmentsTableWithConnection:(id)arg0 ;
+(BOOL)insertAttachmentIntoAttachmentTableWithAttachmentMetadata:(id)arg0 connection:(id)arg1 ;
+(BOOL)insertIntoMessageAttachmentTableGlobalMessageID:(id)arg0 attachmentMetadata:(id)arg1 attachmentID:(NSInteger)arg2 connection:(id)arg3 ;
+(id)log;
+(int)runWithConnection:(id)arg0 ;
+(int)runWithConnection:(id)arg0 dataProvider:(id)arg1 ;


@end


#endif