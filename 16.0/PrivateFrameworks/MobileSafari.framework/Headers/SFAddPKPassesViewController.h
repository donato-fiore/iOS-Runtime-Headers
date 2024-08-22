// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFADDPKPASSESVIEWCONTROLLER_H
#define SFADDPKPASSESVIEWCONTROLLER_H

@class UIViewController, PKAddPassesViewController, NSString;
@protocol PKAddPassesViewControllerDelegate;



@interface SFAddPKPassesViewController : UIViewController <PKAddPassesViewControllerDelegate>

 {
    PKAddPassesViewController *_passesViewController;
    id *_dismissalHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPasses:(id)arg0 dismissalHandler:(id)arg1 ;
-(void)addPassesViewControllerDidFinish:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif