// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVATIMEDVALUE_H
#define CVATIMEDVALUE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVATimedValue : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger syncTimestamp; // ivar: _syncTimestamp
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSObject<NSSecureCoding> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)dictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif