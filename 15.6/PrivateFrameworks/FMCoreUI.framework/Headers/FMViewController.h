// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMVIEWCONTROLLER_H
#define FMVIEWCONTROLLER_H

@class UIViewController, NSString, NSMutableDictionary, NSMutableSet;



@interface FMViewController : UIViewController

@property (readonly, copy) NSString *controllerNibName;
@property (retain, nonatomic) NSMutableDictionary *kvoObservationTokens; // ivar: _kvoObservationTokens
@property (retain, nonatomic) NSMutableSet *notificationTokens; // ivar: _notificationTokens


-(id)actualNibNameForName:(id)arg0 ;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)addKVOObservationToken:(id)arg0 forObject:(id)arg1 ;
-(void)addNotificationToken:(id)arg0 ;
-(void)awakeFromNib;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)performSegueWithIdentifier:(id)arg0 sender:(id)arg1 ;
-(void)removeKVOObservationTokens;
-(void)removeNotificationTokens;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif