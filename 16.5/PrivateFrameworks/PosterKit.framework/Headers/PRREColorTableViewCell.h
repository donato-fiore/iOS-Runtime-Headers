// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRRECOLORTABLEVIEWCELL_H
#define PRRECOLORTABLEVIEWCELL_H

@class UIColorWell, NSString;
@protocol UIColorPickerViewControllerDelegate;


#import "PRRETableViewCell.h"

@interface PRREColorTableViewCell : PRRETableViewCell <UIColorPickerViewControllerDelegate>

 {
    UIColorWell *_well;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_currentValue;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configure;
-(void)_setCurrentValue:(id)arg0 ;
-(void)_tapped:(id)arg0 ;
-(void)colorPickerViewController:(id)arg0 didSelectColor:(id)arg1 continuously:(BOOL)arg2 ;
-(void)colorPickerViewControllerDidFinish:(id)arg0 ;


@end


#endif