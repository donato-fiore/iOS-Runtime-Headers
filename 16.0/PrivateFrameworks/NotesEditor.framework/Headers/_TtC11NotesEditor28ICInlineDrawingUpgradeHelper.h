// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11NOTESEDITOR28ICINLINEDRAWINGUPGRADEHELPER_H
#define _TTC11NOTESEDITOR28ICINLINEDRAWINGUPGRADEHELPER_H

@class NSManagedObjectContext, ICNote, UITextView;

#import <Foundation/Foundation.h>


@interface _TtC11NotesEditor28ICInlineDrawingUpgradeHelper : NSObject {
    ? drawingAttachmentIdentifierToPaperAttachment;
    ? drawingUpgraders;
    ? upgradeSemaphore;
}


@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext; // ivar: managedObjectContext
@property (nonatomic, readonly) ICNote *note; // ivar: note
@property (nonatomic, weak) UITextView *textView; // ivar: textView


-(id)init;
-(id)initWithNote:(id)arg0 managedObjectContext:(id)arg1 textView:(id)arg2 ;
-(id)upgradeWithAttachment:(id)arg0 itemProviders:(id)arg1 itemsAnchor:(NSInteger)arg2 ;
-(id)upgradeWithAttachment:(id)arg0 itemProviders:(id)arg1 itemsLocation:(struct CGPoint )arg2 ;
-(void)cancelUpgrade;
-(void)upgradeAllAttachmentsInNote;


@end


#endif