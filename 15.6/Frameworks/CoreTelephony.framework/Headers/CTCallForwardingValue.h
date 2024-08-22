// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCALLFORWARDINGVALUE_H
#define CTCALLFORWARDINGVALUE_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCallForwardingValue : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) int clss; // ivar: _clss
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSNumber *noReplyTime; // ivar: _noReplyTime
@property (nonatomic) int reason; // ivar: _reason
@property (retain, nonatomic) NSString *saveNumber; // ivar: _saveNumber


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif