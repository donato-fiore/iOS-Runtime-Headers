// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUDOCUMENTINTERACTIONSESSION_H
#define SUDOCUMENTINTERACTIONSESSION_H

@class UIDocumentInteractionController, NSString;
@protocol UIDocumentInteractionControllerDelegate;

#import <Foundation/Foundation.h>


@interface SUDocumentInteractionSession : NSObject <UIDocumentInteractionControllerDelegate>

 {
    UIDocumentInteractionController *_documentInteractionController;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDocumentInteractionController:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)documentInteractionController:(id)arg0 willBeginSendingToApplication:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg0 ;


@end


#endif