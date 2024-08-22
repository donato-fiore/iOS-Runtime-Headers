// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSDIALOGTEXTFIELD_H
#define AMSDIALOGTEXTFIELD_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSDialogTextField : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (nonatomic) BOOL secure; // ivar: _secure
@property (nonatomic) NSInteger tag; // ivar: _tag
@property (copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
+(id)textFieldWithPlaceholder:(id)arg0 secure:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif