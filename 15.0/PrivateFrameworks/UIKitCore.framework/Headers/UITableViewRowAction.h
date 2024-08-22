// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITABLEVIEWROWACTION_H
#define UITABLEVIEWROWACTION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIVisualEffect.h"

@interface UITableViewRowAction : NSObject <NSCopying>



@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) UIVisualEffect *backgroundEffect; // ivar: _backgroundEffect
@property (readonly, nonatomic, getter=_handler) id *handler; // ivar: _handler
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)rowActionWithStyle:(NSInteger)arg0 title:(id)arg1 handler:(id)arg2 ;
-(id)_button;
-(id)_initWithStyle:(NSInteger)arg0 title:(id)arg1 handler:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_setButton:(id)arg0 ;


@end


#endif