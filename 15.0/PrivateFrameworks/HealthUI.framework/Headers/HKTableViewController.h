// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKTABLEVIEWCONTROLLER_H
#define HKTABLEVIEWCONTROLLER_H

@class UITableViewController;



@interface HKTableViewController : UITableViewController {
    BOOL _useInsetStyling;
}




-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)initWithUsingInsetStyling:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif