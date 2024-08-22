// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVADDDROPBOXATTACHMENTSTASKGROUP_H
#define CALDAVADDDROPBOXATTACHMENTSTASKGROUP_H

@class CoreDAVTaskGroup, NSSet, NSDictionary, NSString, NSURL, NSMutableDictionary, CoreDAVUpdateACLTaskGroup;
@protocol CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate;



@interface CalDAVAddDropBoxAttachmentsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate>



@property (retain, nonatomic) NSSet *aceItems; // ivar: _aceItems
@property (retain, nonatomic) NSDictionary *attachments; // ivar: _attachments
@property (retain, nonatomic) NSSet *attendeePrincipalURLs; // ivar: _attendeePrincipalURLs
@property (nonatomic) BOOL attendeesCanManageDropBox; // ivar: _attendeesCanManageDropBox
@property (retain, nonatomic) NSDictionary *contentTypes; // ivar: _contentTypes
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *dropboxURL; // ivar: _dropboxURL
@property (readonly, retain, nonatomic) NSDictionary *etags;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *putFailureSizes; // ivar: _putFailureSizes
@property (retain, nonatomic) NSMutableDictionary *sentAttachmentURLsToETags; // ivar: _sentAttachmentURLsToETags
@property (nonatomic) int state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) CoreDAVUpdateACLTaskGroup *updateACLTaskGroup; // ivar: _updateACLTaskGroup


+(id)dropboxACEItemsForPrincipalURLs:(id)arg0 baseURL:(id)arg1 writable:(BOOL)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg0 dropboxURL:(id)arg1 attachments:(id)arg2 contentTypes:(id)arg3 attendeePrincipalURLs:(id)arg4 attendeesCanManageDropBox:(BOOL)arg5 taskManager:(id)arg6 ;
-(void)_finishWithError:(id)arg0 state:(int)arg1 ;
-(void)_makeDropBox;
-(void)_sendAttachments;
-(void)_updateACLWithState:(int)arg0 ;
-(void)startTaskGroup;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)taskGroup:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif