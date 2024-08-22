// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDICACTIVITYITEMPROVIDER_H
#define _UIDICACTIVITYITEMPROVIDER_H



#import "UIActivityItemProvider.h"
#import "UIDocumentInteractionController.h"

@interface _UIDICActivityItemProvider : UIActivityItemProvider

@property (readonly, weak, nonatomic) UIDocumentInteractionController *documentInteractionController; // ivar: _documentInteractionController


-(BOOL)_shouldExecuteItemOperationForActivity:(id)arg0 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 openURLAnnotationForActivityType:(id)arg1 ;
-(id)initWithPlaceholderItem:(id)arg0 documentInteractionController:(id)arg1 ;
-(id)item;
-(id)loadedURL;
-(void)main;


@end


#endif