// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTPREFERENCESNOTIFICATION_H
#define PKPEERPAYMENTPREFERENCESNOTIFICATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentPreferencesNotification : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (nonatomic) NSUInteger notificationType; // ivar: _notificationType
@property (nonatomic) BOOL value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPreferencesNotification:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif