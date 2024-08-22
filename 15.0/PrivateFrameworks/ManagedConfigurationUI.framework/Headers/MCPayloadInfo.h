// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCPAYLOADINFO_H
#define MCPAYLOADINFO_H

@class NSDate, NSArray, NSString, MCBook;

#import <Foundation/Foundation.h>


@interface MCPayloadInfo : NSObject

@property (retain, nonatomic) NSDate *certificateExpirationDate; // ivar: _certificateExpirationDate
@property (retain, nonatomic) NSArray *certificateProperties; // ivar: _certificateProperties
@property (retain, nonatomic) NSString *friendlyName; // ivar: _friendlyName
@property (nonatomic) BOOL hasDetails; // ivar: _hasDetails
@property (nonatomic) BOOL isCertificate; // ivar: _isCertificate
@property (nonatomic) BOOL isManagedAppPayload; // ivar: _isManagedAppPayload
@property (nonatomic) BOOL isManagedBookPayload; // ivar: _isManagedBookPayload
@property (retain, nonatomic) NSString *localizedPluralForm; // ivar: _localizedPluralForm
@property (retain, nonatomic) NSString *localizedSingularForm; // ivar: _localizedSingularForm
@property (retain, nonatomic) NSString *managedAppID; // ivar: _managedAppID
@property (retain, nonatomic) MCBook *managedBook; // ivar: _managedBook
@property (retain, nonatomic) NSArray *payloadDescriptionKeyValueSections; // ivar: _payloadDescriptionKeyValueSections
@property (nonatomic) BOOL showIcon; // ivar: _showIcon
@property (retain, nonatomic) NSString *subtitle1Description; // ivar: _subtitle1Description
@property (retain, nonatomic) NSString *subtitle1Label; // ivar: _subtitle1Label
@property (retain, nonatomic) NSString *subtitle2Description; // ivar: _subtitle2Description
@property (retain, nonatomic) NSString *subtitle2Label; // ivar: _subtitle2Label
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSArray *typeStrings; // ivar: _typeStrings


+(NSInteger)payloadInfoTypeForPayloadClass:(Class)arg0 ;
+(id)accountPayloadClasses;
+(id)managedAppClasses;
+(id)payloadInfosFromPayload:(id)arg0 ;
+(id)removeDuplicatesFromRestrictionPayloadInfos:(id)arg0 ;
+(id)restrictionPayloadClasses;
-(id)initWithManagedAppID:(id)arg0 ;
-(id)initWithManagedBook:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;


@end


#endif