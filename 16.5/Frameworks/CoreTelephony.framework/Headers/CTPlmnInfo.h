// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTPLMNINFO_H
#define CTPLMNINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPlmnInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *mcc; // ivar: _mcc
@property (readonly, nonatomic) NSString *mnc; // ivar: _mnc


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMcc:(struct MCC )arg0 mnc:(struct MNC )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif