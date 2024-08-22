// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASOREMOTEVIEWCONTROLLER_H
#define ASOREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol ASORemoteViewControllerDelegate;



@interface ASORemoteViewController : UIRemoteViewController

@property (weak, nonatomic) NSObject<ASORemoteViewControllerDelegate> *delegate; // ivar: _delegate


-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif