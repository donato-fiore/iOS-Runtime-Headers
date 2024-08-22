// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGMOUSEPOINTERVIEWCONTROLLER_H
#define PSGMOUSEPOINTERVIEWCONTROLLER_H

@class PSListController;



@interface PSGMousePointerViewController : PSListController



-(id)init;
-(id)naturalScrolling:(id)arg0 ;
-(id)secondaryClick:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tapToClick:(id)arg0 ;
-(id)trackingSpeed:(id)arg0 ;
-(id)twoFingerSecondaryClick:(id)arg0 ;
-(void)dealloc;
-(void)pointerDevicesDidChange;
-(void)setNaturalScrolling:(id)arg0 specifier:(id)arg1 ;
-(void)setSecondaryClick:(id)arg0 specifier:(id)arg1 ;
-(void)setTapToClick:(id)arg0 specifier:(id)arg1 ;
-(void)setTrackingSpeed:(id)arg0 specifier:(id)arg1 ;
-(void)setTwoFingerSecondaryClick:(id)arg0 specifier:(id)arg1 ;


@end


#endif