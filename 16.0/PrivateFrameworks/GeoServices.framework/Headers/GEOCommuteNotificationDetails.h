// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMMUTENOTIFICATIONDETAILS_H
#define GEOCOMMUTENOTIFICATIONDETAILS_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface GEOCommuteNotificationDetails : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *commuteDetailsIdentifier; // ivar: _commuteDetailsIdentifier
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSInteger score; // ivar: _score
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 commuteDetailsIdentifier:(id)arg2 expirationDate:(id)arg3 score:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif