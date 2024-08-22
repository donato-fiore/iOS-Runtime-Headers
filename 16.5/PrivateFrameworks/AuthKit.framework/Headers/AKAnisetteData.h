// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKANISETTEDATA_H
#define AKANISETTEDATA_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKAnisetteData : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *machineID; // ivar: _machineID
@property (copy, nonatomic) NSString *oneTimePassword; // ivar: _oneTimePassword
@property (nonatomic) NSUInteger routingInfo; // ivar: _routingInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif