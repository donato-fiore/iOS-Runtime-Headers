// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIESUPPORT_H
#define CTSTEWIESUPPORT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTStewieSupport : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL hwSupport; // ivar: _hwSupport
@property (nonatomic) BOOL status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSupport:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif