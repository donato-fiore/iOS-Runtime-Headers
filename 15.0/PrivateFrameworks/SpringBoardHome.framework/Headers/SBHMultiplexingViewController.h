// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHMULTIPLEXINGVIEWCONTROLLER_H
#define SBHMULTIPLEXINGVIEWCONTROLLER_H

@class UIViewController, NSString, NSHashTable;


#import "SBHMultiplexingManager.h"

@interface SBHMultiplexingViewController : UIViewController

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat level; // ivar: _level
@property (readonly, nonatomic) UIViewController *multiplexedViewController; // ivar: _multiplexedViewController
@property (retain, nonatomic) SBHMultiplexingManager *multiplexingManager; // ivar: _multiplexingManager
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)initWithLevel:(CGFloat)arg0 identifier:(id)arg1 ;
-(void)_setUpMultiplexedViewController;
-(void)activateWithViewController:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)loadView;
-(void)removeObserver:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif