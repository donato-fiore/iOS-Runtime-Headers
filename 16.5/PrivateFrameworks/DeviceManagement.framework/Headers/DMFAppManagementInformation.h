// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFAPPMANAGEMENTINFORMATION_H
#define DMFAPPMANAGEMENTINFORMATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFAppManagementInformation : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSString *redemptionCode; // ivar: _redemptionCode
@property (nonatomic) NSUInteger state; // ivar: _state
@property (copy, nonatomic) NSString *unusedRedemptionCode; // ivar: _unusedRedemptionCode


+(BOOL)supportsSecureCoding;
+(id)stringForState:(NSUInteger)arg0 ;
-(id)_stringForOptions:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif