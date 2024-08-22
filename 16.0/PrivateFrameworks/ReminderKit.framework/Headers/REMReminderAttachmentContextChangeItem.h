// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMREMINDERATTACHMENTCONTEXTCHANGEITEM_H
#define REMREMINDERATTACHMENTCONTEXTCHANGEITEM_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "REMReminderChangeItem.h"

@interface REMReminderAttachmentContextChangeItem : NSObject

@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *fileAttachments;
@property (readonly, nonatomic) NSArray *imageAttachments;
@property (retain, nonatomic) NSMutableArray *mutableAttachments; // ivar: _mutableAttachments
@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem; // ivar: _reminderChangeItem
@property (readonly, nonatomic) NSArray *urlAttachments;


-(id)addFileAttachmentWithData:(id)arg0 uti:(id)arg1 ;
-(id)addFileAttachmentWithURL:(id)arg0 error:(*id)arg1 ;
-(id)addImageAttachmentWithData:(id)arg0 uti:(id)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 ;
-(id)addImageAttachmentWithURL:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)addURLAttachmentWithURL:(id)arg0 ;
-(id)attachmentsOfClass:(Class)arg0 ;
-(id)initWithReminderChangeItem:(id)arg0 ;
-(id)newObjectIDForFileAttachment;
-(id)newObjectIDForImageAttachment;
-(id)newObjectIDForURLAttachment;
-(id)setURLAttachmentWithURL:(id)arg0 ;
-(void)addAttachment:(id)arg0 ;
-(void)insertAttachment:(id)arg0 afterAttachment:(id)arg1 ;
-(void)insertAttachment:(id)arg0 beforeAttachment:(id)arg1 ;
-(void)removeAllAttachments;
-(void)removeAllAttachmentsWithClass:(Class)arg0 ;
-(void)removeAttachment:(id)arg0 ;
-(void)removeURLAttachments;


@end


#endif