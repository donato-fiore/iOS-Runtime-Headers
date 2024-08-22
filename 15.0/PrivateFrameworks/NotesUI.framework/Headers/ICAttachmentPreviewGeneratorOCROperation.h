// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICATTACHMENTPREVIEWGENERATOROCROPERATION_H
#define ICATTACHMENTPREVIEWGENERATOROCROPERATION_H

@class ICAttachmentModel, NSManagedObjectContext;


#import "ICAttachmentPreviewGeneratorOperation.h"

@interface ICAttachmentPreviewGeneratorOCROperation : ICAttachmentPreviewGeneratorOperation

@property (retain) ICAttachmentModel *attachmentModel; // ivar: _attachmentModel
@property (retain) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext


-(NSUInteger)type;
-(void)main;


@end


#endif