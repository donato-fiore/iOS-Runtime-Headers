// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUPOCKETBUTTONVIEWCONTROLLER_H
#define HUPOCKETBUTTONVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface HUPocketButtonViewController : UIViewController

@property (readonly, copy, nonatomic) NSArray *descriptors; // ivar: _descriptors


+(struct CGSize )calculatePreferredContentSizeForDescriptors:(id)arg0 ;
-(id)initWithButtonDescriptors:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_buttonHit:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif