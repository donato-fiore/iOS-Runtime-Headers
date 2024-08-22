// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKREVIEWLARGEATTACHMENTSVIEWCONTROLLER_H
#define CKREVIEWLARGEATTACHMENTSVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol QLPreviewControllerDelegate, OS_dispatch_queue;


#import "CKAbstractReviewViewController.h"

@interface CKReviewLargeAttachmentsViewController : CKAbstractReviewViewController <QLPreviewControllerDelegate>



@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue; // ivar: _privateWorkQueue
@property (readonly) Class superclass;


-(Class)tableViewCellClass;
-(NSUInteger)numberOfModelObjects;
-(id)_previewItem;
-(id)attachmentClass;
-(id)init;
-(id)modelObjectAtIndex:(NSUInteger)arg0 ;
-(id)navigationBarTitle;
-(id)tableViewCellReuseIdentifier;
-(void)_populateAttachmentData;
-(void)deleteModelObjectAndUnderlyingData:(id)arg0 ;
-(void)didSelectModelObjectAtIndex:(NSUInteger)arg0 ;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)reloadModelData;


@end


#endif