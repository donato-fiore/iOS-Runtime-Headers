// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDRAWINGHASHTAGSANDMENTIONSCONTROLLER_H
#define ICDRAWINGHASHTAGSANDMENTIONSCONTROLLER_H

@class ICAttachment, NSString, NSArray, NSManagedObjectContext, NSDictionary, ICNote, CKShare;
@protocol PKAttachmentViewHashtagsAndMentionsDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICDrawingHashtagsAndMentionsController : NSObject <PKAttachmentViewHashtagsAndMentionsDelegate>

 {
    NSObject<OS_dispatch_queue> *_contactsRequestQueue;
}


@property (weak, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *eligibleShareParticipants;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (copy, nonatomic) NSDictionary *mentionTokensForParticipants; // ivar: _mentionTokensForParticipants
@property (readonly, nonatomic) ICNote *note;
@property (readonly, nonatomic) CKShare *share;
@property (readonly) Class superclass;


-(id)allConfirmedHashtagsForAttachmentView:(id)arg0 ;
-(id)allConfirmedMentionsForAttachmentView:(id)arg0 ;
-(id)attachmentView:(id)arg0 participantMatchesForMentionText:(id)arg1 ;
-(id)initWithAttachment:(id)arg0 ;
-(void)allPossibleParticipantNameTokensForAttachmentView:(id)arg0 completion:(id)arg1 ;
-(void)attachmentView:(id)arg0 userConfirmedHashtagWithUUID:(id)arg1 displayText:(id)arg2 ;
-(void)attachmentView:(id)arg0 userConfirmedMentionWithUUID:(id)arg1 participantIdentifier:(id)arg2 ;
-(void)attachmentView:(id)arg0 userDeletedHashtagWithUUID:(id)arg1 ;
-(void)attachmentView:(id)arg0 userDeletedMentionWithUUID:(id)arg1 ;
-(void)fetchMentionTokensForParticipants:(id)arg0 completion:(id)arg1 ;


@end


#endif