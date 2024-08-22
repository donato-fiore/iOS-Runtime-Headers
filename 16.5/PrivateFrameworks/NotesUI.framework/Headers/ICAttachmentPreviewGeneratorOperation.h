// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTPREVIEWGENERATOROPERATION_H
#define ICATTACHMENTPREVIEWGENERATOROPERATION_H

@class NSOperation, NSManagedObjectID, ICAttachmentModel, NSManagedObjectContext;



@interface ICAttachmentPreviewGeneratorOperation : NSOperation

@property (retain) NSManagedObjectID *attachmentID; // ivar: _attachmentID
@property (retain) ICAttachmentModel *attachmentModel; // ivar: _attachmentModel
@property (retain) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (readonly, nonatomic) NSUInteger type;


-(id)initWithAttachmentManagedObjectID:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif