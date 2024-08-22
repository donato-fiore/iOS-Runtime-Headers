// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPALERTACTION_H
#define CPALERTACTION_H

@class UIColor, NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPAlertAction : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) UIColor *color; // ivar: _color
@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 color:(id)arg1 handler:(id)arg2 ;
-(id)initWithTitle:(id)arg0 style:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif