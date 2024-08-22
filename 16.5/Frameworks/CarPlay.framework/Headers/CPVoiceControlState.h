// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPVOICECONTROLSTATE_H
#define CPVOICECONTROLSTATE_H

@class NSString, UIImage, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPVoiceControlState : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL repeats; // ivar: _repeats
@property (readonly, copy, nonatomic) NSArray *titleVariants; // ivar: _titleVariants


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 titleVariants:(id)arg1 image:(id)arg2 repeats:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif