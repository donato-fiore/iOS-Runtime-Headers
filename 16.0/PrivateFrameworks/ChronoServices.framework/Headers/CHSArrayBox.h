// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSARRAYBOX_H
#define CHSARRAYBOX_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHSArrayBox : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)boxedValue:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif