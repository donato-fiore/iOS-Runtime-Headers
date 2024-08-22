// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKBROWSERDRAGCONTROLLER_H
#define CKBROWSERDRAGCONTROLLER_H

@class UIViewController;
@protocol CKBrowserDragControllerDelegate;



@interface CKBrowserDragController : UIViewController

@property (weak, nonatomic) NSObject<CKBrowserDragControllerDelegate> *delegate; // ivar: _delegate


-(id)initWithView:(id)arg0 ;


@end


#endif