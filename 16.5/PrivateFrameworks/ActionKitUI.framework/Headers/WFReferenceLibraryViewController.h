// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREFERENCELIBRARYVIEWCONTROLLER_H
#define WFREFERENCELIBRARYVIEWCONTROLLER_H

@class UIReferenceLibraryViewController;
@protocol WFReferenceLibraryViewControllerDelegate;



@interface WFReferenceLibraryViewController : UIReferenceLibraryViewController

@property (weak, nonatomic) NSObject<WFReferenceLibraryViewControllerDelegate> *delegate; // ivar: _delegate


-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif