// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGELOADINGCONTEXT_H
#define MFMESSAGELOADINGCONTEXT_H

@class EFCancelationToken, EFObservable<EFObserver>, NSString, EFObservable, MFMimePart, MFMimeBody;
@protocol EFCancelable;

#import <Foundation/Foundation.h>

#import "MFAttachmentManager.h"
#import "MFMailMessage.h"

@interface MFMessageLoadingContext : NSObject <EFCancelable>

 {
    EFCancelationToken *_cancelable;
    EFObservable<EFObserver> *_inputObservable;
    NSString *_eventUniqueID;
    NSString *_meetingName;
    NSString *_meetingStorePersistentID;
    NSString *_eventICSRepresentation;
}


@property (retain, nonatomic, setter=_setAttachmentManager:) MFAttachmentManager *attachmentManager; // ivar: _attachmentManager
@property (readonly, nonatomic) EFObservable *contentObservable; // ivar: _contentObservable
@property (nonatomic) NSUInteger contentOffset; // ivar: _contentOffset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraftMessage) BOOL draftMessage; // ivar: _draftMessage
@property (readonly, nonatomic, getter=isEditableMessage) BOOL editableMessage; // ivar: _editableMessage
@property (nonatomic) BOOL hasLoadedBestAlternativePart; // ivar: _hasLoadedBestAlternativePart
@property (nonatomic) BOOL hasLoadedCompleteMessage; // ivar: _hasLoadedCompleteMessage
@property (nonatomic) BOOL hasLoadedSomeContent; // ivar: _hasLoadedSomeContent
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MFMimePart *loadedPart; // ivar: _loadedPart
@property (retain, nonatomic, setter=_setMessage:) MFMailMessage *message; // ivar: _message
@property (retain, nonatomic, setter=_setMessageBody:) MFMimeBody *messageBody; // ivar: _messageBody
@property (readonly, nonatomic, getter=isOutgoingMessage) BOOL outgoingMessage; // ivar: _outgoingMessage
@property (readonly) Class superclass;


+(NSUInteger)_nextOffsetForOffset:(NSUInteger)arg0 totalLength:(NSUInteger)arg1 requestedAmount:(NSUInteger)arg2 ;
+(id)log;
-(id)_reallyLoad:(NSInteger)arg0 shouldDownload:(BOOL)arg1 ;
-(id)addLoadObserver:(id)arg0 ;
-(id)initWithMessage:(id)arg0 attachmentManager:(id)arg1 ;
-(id)onScheduler:(id)arg0 addLoadObserver:(id)arg1 ;
-(void)_load:(NSInteger)arg0 shouldDownload:(BOOL)arg1 ;
-(void)_setupMeetingData;
-(void)_setupObservableStreams;
-(void)assignAttachmentManagerToContent:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)load:(NSInteger)arg0 ;
-(void)load:(NSInteger)arg0 scheduler:(id)arg1 ;
-(void)load:(NSInteger)arg0 scheduler:(id)arg1 shouldDownload:(BOOL)arg2 ;
-(void)processMeetingInvitations:(id)arg0 ;


@end


#endif