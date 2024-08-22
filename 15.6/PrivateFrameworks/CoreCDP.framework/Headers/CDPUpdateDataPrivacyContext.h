// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPUPDATEDATAPRIVACYCONTEXT_H
#define CDPUPDATEDATAPRIVACYCONTEXT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDPUpdateDataPrivacyContext : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *devicesThatLoseAccountAccessOnEnable; // ivar: _devicesThatLoseAccountAccessOnEnable
@property (nonatomic) NSUInteger statusToSet; // ivar: _statusToSet
@property (nonatomic) BOOL userAcceptedDevicesToLoseAccountAccess; // ivar: _userAcceptedDevicesToLoseAccountAccess


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatusToUpdate:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif