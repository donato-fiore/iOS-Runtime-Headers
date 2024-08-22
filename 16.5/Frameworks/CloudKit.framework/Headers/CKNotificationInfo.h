// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKNOTIFICATIONINFO_H
#define CKNOTIFICATIONINFO_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKNotificationInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy) NSString *alertActionLocalizationKey; // ivar: _alertActionLocalizationKey
@property (copy) NSString *alertBody; // ivar: _alertBody
@property (copy) NSString *alertLaunchImage; // ivar: _alertLaunchImage
@property (copy) NSArray *alertLocalizationArgs; // ivar: _alertLocalizationArgs
@property (copy) NSString *alertLocalizationKey; // ivar: _alertLocalizationKey
@property (copy) NSString *category; // ivar: _category
@property (copy) NSString *collapseIDKey; // ivar: _collapseIDKey
@property (copy) NSArray *desiredKeys; // ivar: _desiredKeys
@property BOOL shouldBadge; // ivar: _shouldBadge
@property BOOL shouldSendContentAvailable; // ivar: _shouldSendContentAvailable
@property BOOL shouldSendMutableContent; // ivar: _shouldSendMutableContent
@property (copy) NSString *soundName; // ivar: _soundName
@property (copy) NSString *subtitle; // ivar: _subtitle
@property (copy) NSArray *subtitleLocalizationArgs; // ivar: _subtitleLocalizationArgs
@property (copy) NSString *subtitleLocalizationKey; // ivar: _subtitleLocalizationKey
@property (copy) NSString *title; // ivar: _title
@property (copy) NSArray *titleLocalizationArgs; // ivar: _titleLocalizationArgs
@property (copy) NSString *titleLocalizationKey; // ivar: _titleLocalizationKey


+(BOOL)supportsSecureCoding;
+(id)notificationInfo;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif