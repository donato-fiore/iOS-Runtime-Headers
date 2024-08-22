// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICINDEXHANDWRITINGOPERATION_H
#define ICINDEXHANDWRITINGOPERATION_H

@class NSOperation, NSManagedObjectID, NSManagedObjectContext;



@interface ICIndexHandwritingOperation : NSOperation

@property (retain, nonatomic) NSManagedObjectID *attachmentObjectID; // ivar: _attachmentObjectID
@property (retain, nonatomic) NSManagedObjectContext *context; // ivar: _context


+(id)sharedOperationQueue;
-(id)initWithAttachmentObjectID:(id)arg0 context:(id)arg1 ;
-(void)main;


@end


#endif