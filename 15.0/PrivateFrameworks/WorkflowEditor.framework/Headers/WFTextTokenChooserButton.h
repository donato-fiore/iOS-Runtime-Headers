// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTEXTTOKENCHOOSERBUTTON_H
#define WFTEXTTOKENCHOOSERBUTTON_H

@class WFImage, NSString;

#import <Foundation/Foundation.h>


@interface WFTextTokenChooserButton : NSObject

@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) WFImage *image; // ivar: _image
@property (nonatomic) BOOL isPossibleValue; // ivar: _isPossibleValue
@property (nonatomic) BOOL preferAttributedStringRepresentation; // ivar: _preferAttributedStringRepresentation
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)buttonWithTitle:(id)arg0 subtitle:(id)arg1 image:(id)arg2 handler:(id)arg3 ;
-(id)alertButtonRepresentation;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 image:(id)arg2 handler:(id)arg3 ;


@end


#endif