// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTPREFERENCES_H
#define PKPEERPAYMENTPREFERENCES_H

@class NSDate, NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentPreferences : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL canReceiveFormalPaymentRequests; // ivar: _canReceiveFormalPaymentRequests
@property (nonatomic, getter=isDirty) BOOL dirty; // ivar: _dirty
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (copy, nonatomic) NSSet *notifications; // ivar: _notifications
@property (nonatomic) BOOL requiresConfirmation; // ivar: _requiresConfirmation
@property (copy, nonatomic) NSSet *restrictions; // ivar: _restrictions


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPreferences:(id)arg0 ;
-(BOOL)isOutOfDate;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 lastUpdated:(id)arg1 ;
-(id)notificationWithType:(NSUInteger)arg0 altDSID:(id)arg1 ;
-(id)restrictionWithType:(NSUInteger)arg0 altDSID:(id)arg1 ;
-(void)addRestrictionType:(NSUInteger)arg0 altDSID:(id)arg1 ;
-(void)didUpdateNotification:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeRestrictionType:(NSUInteger)arg0 altDSID:(id)arg1 ;


@end


#endif