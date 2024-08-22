// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQVIEWCONTROLLER_H
#define ICQVIEWCONTROLLER_H

@class UIViewController, UIColor, NSString, _ICQPageSpecification;
@protocol ICQPageDelegate;



@interface ICQViewController : UIViewController <ICQPageDelegate>



@property (copy, nonatomic) UIColor *buttonTintColor; // ivar: _buttonTintColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<ICQPageDelegate> *pageDelegate; // ivar: _pageDelegate
@property (readonly, nonatomic) _ICQPageSpecification *pageSpecification; // ivar: _pageSpecification
@property (readonly) Class superclass;


+(BOOL)supportsPageClassIdentifier:(id)arg0 ;
+(Class)viewControllerClassForPageClassIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPageSpecification:(id)arg0 ;
-(void)sender:(id)arg0 action:(NSInteger)arg1 parameters:(id)arg2 ;


@end


#endif