// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUXFLEXMUSICVIEWCONTROLLER_H
#define PUXFLEXMUSICVIEWCONTROLLER_H

@class UIViewController;
@protocol PXStoryFlexMusicViewController;



@interface PUXFlexMusicViewController : UIViewController <PXStoryFlexMusicViewController>

 {
    ? player;
    ? pickerView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif