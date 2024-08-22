// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICGALLERYATTACHMENTVIEWSUBATTACHMENTITEM_H
#define ICGALLERYATTACHMENTVIEWSUBATTACHMENTITEM_H

@class ICAttachment, NSString, NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface ICGalleryAttachmentViewSubAttachmentItem : NSObject

@property (retain, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (copy, nonatomic) NSString *attachmentIdentifier; // ivar: _attachmentIdentifier
@property (retain, nonatomic) NSManagedObjectContext *context; // ivar: _context
@property (nonatomic) CGSize size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateSize;
-(id)initWithAttachmentIdentifier:(id)arg0 context:(id)arg1 ;
-(void)invalidateSize;


@end


#endif