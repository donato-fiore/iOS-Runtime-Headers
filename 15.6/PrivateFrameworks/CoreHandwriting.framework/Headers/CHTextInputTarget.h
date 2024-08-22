// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHTEXTINPUTTARGET_H
#define CHTEXTINPUTTARGET_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHTextInputTarget : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (readonly, copy, nonatomic) NSNumber *inputTargetIdentifier; // ivar: _inputTargetIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInputTarget:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 frame:(struct CGRect )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif