// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPREVIEWMENUITEM_H
#define UIPREVIEWMENUITEM_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIImage.h"

@interface UIPreviewMenuItem : NSObject <NSCopying>



@property (copy, nonatomic, getter=_subitems, setter=_setSubitems:) NSArray *_subitems; // ivar: __subitems
@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color; // ivar: _color
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (copy, nonatomic) NSString *identifier; // ivar: identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)_itemWithTitle:(id)arg0 color:(id)arg1 image:(id)arg2 handler:(id)arg3 ;
+(id)_itemWithTitle:(id)arg0 style:(NSInteger)arg1 image:(id)arg2 handler:(id)arg3 ;
+(id)itemWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
+(id)itemWithTitle:(id)arg0 style:(NSInteger)arg1 items:(id)arg2 ;
+(id)itemWithViewControllerPreviewAction:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif