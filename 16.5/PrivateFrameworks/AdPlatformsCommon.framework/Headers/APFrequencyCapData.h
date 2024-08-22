// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APFREQUENCYCAPDATA_H
#define APFREQUENCYCAPDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface APFrequencyCapData : NSObject <NSSecureCoding>



@property NSUInteger duration; // ivar: _duration
@property NSInteger relevantIdentifier; // ivar: _relevantIdentifier
@property NSUInteger value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif