// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPREFERENCELIBRARYVIEWCONTROLLER_H
#define TSWPREFERENCELIBRARYVIEWCONTROLLER_H

@class UIReferenceLibraryViewController;
@protocol TSWPReferenceLibraryViewControllerDelegate;



@interface TSWPReferenceLibraryViewController : UIReferenceLibraryViewController

@property (nonatomic) NSObject<TSWPReferenceLibraryViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif