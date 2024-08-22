// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVADDMANAGEDATTACHMENTSTASKGROUP_H
#define CALDAVADDMANAGEDATTACHMENTSTASKGROUP_H

@class CoreDAVTaskGroup, NSURL, NSDictionary, NSMutableDictionary, NSString, NSData;



@interface CalDAVAddManagedAttachmentsTaskGroup : CoreDAVTaskGroup {
    NSURL *_postURLWithQuery;
}


@property (retain, nonatomic) NSDictionary *attachments; // ivar: _attachments
@property (retain, nonatomic) NSDictionary *contentTypes; // ivar: _contentTypes
@property (retain, nonatomic) NSMutableDictionary *filenamesToServerLocation; // ivar: _filenamesToServerLocation
@property (nonatomic) BOOL hadPreconditionFailure; // ivar: _hadPreconditionFailure
@property (retain, nonatomic) NSDictionary *postFailureSizes; // ivar: _postFailureSizes
@property (retain, nonatomic) NSString *previousETag; // ivar: _previousETag
@property (retain, nonatomic) NSString *previousScheduleTag; // ivar: _previousScheduleTag
@property (retain, nonatomic) NSURL *resourceURL; // ivar: _resourceURL
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) NSString *updatedETag; // ivar: _updatedETag
@property (retain, nonatomic) NSData *updatedResourcePayload; // ivar: _updatedResourcePayload
@property (retain, nonatomic) NSString *updatedScheduleTag; // ivar: _updatedScheduleTag


-(BOOL)_postedLastAttachment;
-(id)initWithAccountInfoProvider:(id)arg0 resourceURL:(id)arg1 attachments:(id)arg2 contentTypes:(id)arg3 taskManager:(id)arg4 ;
-(id)urlWithQuery;
-(void)_fetchUpdatedContent;
-(void)_finishWithError:(id)arg0 state:(int)arg1 ;
-(void)_handlePostResponse:(id)arg0 ;
-(void)_sendAttachments;
-(void)startTaskGroup;


@end


#endif