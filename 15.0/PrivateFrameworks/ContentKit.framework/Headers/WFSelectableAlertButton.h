// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSELECTABLEALERTBUTTON_H
#define WFSELECTABLEALERTBUTTON_H

@class NSString;


#import "WFAlertButton.h"
#import "WFImage.h"

@interface WFSelectableAlertButton : WFAlertButton

@property (readonly, copy, nonatomic) WFImage *image; // ivar: _image
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) BOOL stickySelection; // ivar: _stickySelection
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle


// +(id)buttonWithTitle:(id)arg0 subtitle:(id)arg1 selected:(BOOL)arg2 stickySelection:(BOOL)arg3 style:(NSInteger)arg4 handler:(id)arg5 image:(unk)arg6  ;
+(id)buttonWithTitle:(id)arg0 subtitle:(id)arg1 selected:(BOOL)arg2 style:(NSInteger)arg3 handler:(id)arg4 ;


@end


#endif