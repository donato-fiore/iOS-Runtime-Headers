// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMESSAGESROOTGADGETVIEWCONTROLLER_H
#define PXMESSAGESROOTGADGETVIEWCONTROLLER_H



#import "PXGadgetUIViewController.h"
#import "PXMessagesGadgetDataSourceManager.h"

@interface PXMessagesRootGadgetViewController : PXGadgetUIViewController

@property (readonly, nonatomic) PXMessagesGadgetDataSourceManager *messagesDataSourceManager; // ivar: _messagesDataSourceManager
@property (nonatomic) CGFloat recentPhotosHeight;


+(Class)gadgetSpecClass;
-(id)initWithGadgetDataSourceManager:(id)arg0 ;
-(void)prepareForPresentationStyle:(NSInteger)arg0 ;
-(void)viewDidLoad;


@end


#endif