// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSDICTIONARYBOX_H
#define CHSDICTIONARYBOX_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHSDictionaryBox : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)boxedValue:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif