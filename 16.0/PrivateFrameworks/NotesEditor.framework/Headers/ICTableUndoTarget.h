// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTABLEUNDOTARGET_H
#define ICTABLEUNDOTARGET_H

@class NSString, ICTableAttachmentProvider;
@protocol TTTextUndoTarget;

#import <Foundation/Foundation.h>

#import "ICTableAttachmentViewController.h"

@interface ICTableUndoTarget : NSObject <TTTextUndoTarget>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICTableAttachmentProvider *provider; // ivar: _provider
@property (readonly) Class superclass;
@property (weak, nonatomic) ICTableAttachmentViewController *tableAttachmentViewController; // ivar: _tableAttachmentViewController
@property (readonly, nonatomic) ICTableAttachmentViewController *tableAttachmentViewControllerForUndo;


-(id)init;
-(id)initWithProvider:(id)arg0 viewController:(id)arg1 ;
-(void)applyUndoGroup:(id)arg0 ;


@end


#endif