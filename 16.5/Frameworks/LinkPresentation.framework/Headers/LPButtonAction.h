// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPBUTTONACTION_H
#define LPBUTTONACTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "LPImage.h"

@interface LPButtonAction : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic, getter=isHeader) BOOL header; // ivar: _header
@property (retain, nonatomic) LPImage *image; // ivar: _image
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) LPImage *visibleImage; // ivar: _visibleImage
@property (copy, nonatomic) NSString *visibleTitle; // ivar: _visibleTitle


+(id)actionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;


@end


#endif