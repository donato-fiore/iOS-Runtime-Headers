// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPENDINGACCESSORIESGRIDVIEWCONTROLLER_H
#define HUPENDINGACCESSORIESGRIDVIEWCONTROLLER_H

@class NSString;
@protocol HFItemManagerDelegate;


#import "HUServiceGridViewController.h"

@interface HUPendingAccessoriesGridViewController : HUServiceGridViewController <HFItemManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 ;
-(id)initWithUser:(id)arg0 home:(id)arg1 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(void)viewDidLoad;


@end


#endif