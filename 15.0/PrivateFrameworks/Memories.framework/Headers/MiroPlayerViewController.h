// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROPLAYERVIEWCONTROLLER_H
#define MIROPLAYERVIEWCONTROLLER_H

@class UIViewController;
@protocol MemoryOwner;



@interface MiroPlayerViewController : UIViewController

@property (retain, nonatomic) NSObject<MemoryOwner> *memoryOwnerDelegate; // ivar: _memoryOwnerDelegate


-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)warnTooManyLiveCompositors:(id)arg0 ;


@end


#endif