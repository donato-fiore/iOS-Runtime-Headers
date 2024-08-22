// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNBUTTONACTIONTITLE_H
#define MNBUTTONACTIONTITLE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNButtonActionTitle : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger action; // ivar: _action
@property (readonly, nonatomic) int buttonDisplay; // ivar: _buttonDisplay
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithAction:(NSUInteger)arg0 withTitle:(id)arg1 buttonDisplay:(int)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif