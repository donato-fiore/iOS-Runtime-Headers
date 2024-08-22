// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPNOTIFICATION_H
#define PPNOTIFICATION_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPNotification : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNotification:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBundleId:(id)arg0 title:(id)arg1 subtitle:(id)arg2 message:(id)arg3 date:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentDateAndBundleId:(id)arg0 title:(id)arg1 subtitle:(id)arg2 message:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif