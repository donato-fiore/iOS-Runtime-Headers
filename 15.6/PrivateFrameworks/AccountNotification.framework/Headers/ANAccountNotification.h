// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANACCOUNTNOTIFICATION_H
#define ANACCOUNTNOTIFICATION_H

@class NSString, NSDate, NSDictionary;
@protocol NSSecureCoding, ANCachedDictionaryRepresentationProtocol;

#import <Foundation/Foundation.h>

#import "ANNotificationAction.h"

@interface ANAccountNotification : NSObject <NSSecureCoding, ANCachedDictionaryRepresentationProtocol>



@property (readonly, nonatomic) NSString *accountTypeID; // ivar: _accountTypeID
@property (retain, nonatomic) ANNotificationAction *activateAction; // ivar: _activateAction
@property (copy, nonatomic) NSString *activateButtonTitle; // ivar: _activateButtonTitle
@property (copy, nonatomic) NSString *callbackMachService; // ivar: _callbackMachService
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger destinations; // ivar: _destinations
@property (retain, nonatomic) ANNotificationAction *dismissAction; // ivar: _dismissAction
@property (copy, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) NSInteger sectionSubtype; // ivar: _sectionSubtype
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)initForAccountWithType:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithManagedObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif