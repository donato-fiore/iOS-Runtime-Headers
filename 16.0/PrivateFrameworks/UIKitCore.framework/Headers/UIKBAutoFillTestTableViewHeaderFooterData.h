// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBAUTOFILLTESTTABLEVIEWHEADERFOOTERDATA_H
#define UIKBAUTOFILLTESTTABLEVIEWHEADERFOOTERDATA_H

@class NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIKBAutoFillTestTableViewHeaderFooterData : NSObject <NSCoding>



@property (readonly, nonatomic) UIView *headerFooterView; // ivar: _headerFooterView
@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 view:(id)arg1 height:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif