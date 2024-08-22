// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TIINPUTCONTEXTENTRY_H
#define _TIINPUTCONTEXTENTRY_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TIInputContextEntry : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *senderIdentifier; // ivar: _senderIdentifier
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif