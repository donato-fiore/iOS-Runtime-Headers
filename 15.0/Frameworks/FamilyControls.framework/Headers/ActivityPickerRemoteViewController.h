// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACTIVITYPICKERREMOTEVIEWCONTROLLER_H
#define ACTIVITYPICKERREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;



@interface ActivityPickerRemoteViewController : UIRemoteViewController {
    ? didSelectCallback;
    ? didCancelCallback;
}




+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;


@end


#endif