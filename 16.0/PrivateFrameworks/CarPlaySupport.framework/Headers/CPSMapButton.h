// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSMAPBUTTON_H
#define CPSMAPBUTTON_H

@class CPMapButton;


#import "CPSButton.h"

@interface CPSMapButton : CPSButton

@property (retain, nonatomic) CPMapButton *mapButton; // ivar: _mapButton


+(id)buttonWithCPMapButton:(id)arg0 ;
-(float)charge;
-(void)_updateButtonImages;
-(void)setCharge:(float)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif