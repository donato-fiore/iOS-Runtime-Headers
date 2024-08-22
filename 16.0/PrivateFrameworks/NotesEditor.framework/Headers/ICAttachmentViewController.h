// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICATTACHMENTVIEWCONTROLLER_H
#define ICATTACHMENTVIEWCONTROLLER_H

@class ICAttachment, NSString, ICTextAttachment;
@protocol ICAttachmentViewControllerInitializing;


#import "ICAbstractAttachmentViewController.h"

@interface ICAttachmentViewController : ICAbstractAttachmentViewController <ICAttachmentViewControllerInitializing>



@property (readonly, weak, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forManualRendering; // ivar: _forManualRendering
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) ICTextAttachment *textAttachment; // ivar: _textAttachment


-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithTextAttachment:(id)arg0 forManualRendering:(BOOL)arg1 layoutManager:(id)arg2 ;
-(void)loadView;


@end


#endif