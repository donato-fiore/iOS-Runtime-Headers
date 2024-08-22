// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBBOLDTRAYBUTTON_H
#define OBBOLDTRAYBUTTON_H

@class NSNumber, NSAttributedString;


#import "OBTrayButton.h"

@interface OBBoldTrayButton : OBTrayButton

@property (retain, nonatomic) NSNumber *buttonStateRequiredHeight; // ivar: _buttonStateRequiredHeight
@property (retain, nonatomic) NSAttributedString *cachedDisableStateTitle; // ivar: _cachedDisableStateTitle


+(id)boldButton;
-(id)boldConfiguration;
-(struct CGSize )intrinsicContentSize;
-(void)hidesBusyIndicator;
-(void)setEnabled:(BOOL)arg0 ;
-(void)showsBusyIndicator;
-(void)tintColorDidChange;
-(void)updateConfiguration;


@end


#endif