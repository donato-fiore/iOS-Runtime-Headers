// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSEARCHDISPLAYCONTROLLER_H
#define SUSEARCHDISPLAYCONTROLLER_H

@class UISearchDisplayController;



@interface SUSearchDisplayController : UISearchDisplayController {
    BOOL _store_navigationBarHidingEnabled;
}




-(BOOL)isNavigationBarHidingEnabled;
-(id)_createPopoverController;
-(void)_noEventSetSearchFieldText:(id)arg0 ;
-(void)_updateSearchBarMaskIfNecessary;
-(void)setActive:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setNavigationBarHidingEnabled:(BOOL)arg0 ;


@end


#endif