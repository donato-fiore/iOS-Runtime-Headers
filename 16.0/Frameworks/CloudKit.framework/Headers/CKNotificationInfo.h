// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKNOTIFICATIONINFO_H
#define CKNOTIFICATIONINFO_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKNotificationInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *alertActionLocalizationKey; // ivar: _alertActionLocalizationKey
@property (copy, nonatomic) NSString *alertBody; // ivar: _alertBody
@property (copy, nonatomic) NSString *alertLaunchImage; // ivar: _alertLaunchImage
@property (copy, nonatomic) NSArray *alertLocalizationArgs; // ivar: _alertLocalizationArgs
@property (copy, nonatomic) NSString *alertLocalizationKey; // ivar: _alertLocalizationKey
@property (copy, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) NSString *collapseIDKey; // ivar: _collapseIDKey
@property (copy, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (nonatomic) BOOL shouldBadge; // ivar: _shouldBadge
@property (nonatomic) BOOL shouldSendContentAvailable; // ivar: _shouldSendContentAvailable
@property (nonatomic) BOOL shouldSendMutableContent; // ivar: _shouldSendMutableContent
@property (copy, nonatomic) NSString *soundName; // ivar: _soundName
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSArray *subtitleLocalizationArgs; // ivar: _subtitleLocalizationArgs
@property (copy, nonatomic) NSString *subtitleLocalizationKey; // ivar: _subtitleLocalizationKey
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSArray *titleLocalizationArgs; // ivar: _titleLocalizationArgs
@property (copy, nonatomic) NSString *titleLocalizationKey; // ivar: _titleLocalizationKey


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