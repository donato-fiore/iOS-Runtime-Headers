// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNNOTIFICATIONCONTENT_H
#define CALNNOTIFICATIONCONTENT_H

@class NSString, NSDate, NSURL, NSArray, NSDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CALNNotificationSound.h"

@interface CALNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, copy, nonatomic) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) NSURL *defaultActionURL; // ivar: _defaultActionURL
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSString *iconIdentifier; // ivar: _iconIdentifier
@property (readonly, nonatomic) NSUInteger interruptionLevel; // ivar: _interruptionLevel
@property (readonly, copy, nonatomic) NSArray *peopleIdentifiers; // ivar: _peopleIdentifiers
@property (readonly, copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly, nonatomic) BOOL shouldHideTime; // ivar: _shouldHideTime
@property (readonly, nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved; // ivar: _shouldSuppressSyncDismissalWhenRemoved
@property (readonly, copy, nonatomic) CALNNotificationSound *sound; // ivar: _sound
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *summaryArgument; // ivar: _summaryArgument
@property (readonly, nonatomic) NSUInteger summaryArgumentCount; // ivar: _summaryArgumentCount
@property (readonly, copy, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualForDiffingPurposesToContent:(id)arg0 ;
-(BOOL)isEqualToContent:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithTitle:(id)arg0 subtitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 sectionIdentifier:(id)arg4 date:(id)arg5 expirationDate:(id)arg6 defaultActionURL:(id)arg7 iconIdentifier:(id)arg8 shouldHideTime:(BOOL)arg9 shouldSuppressSyncDismissalWhenRemoved:(BOOL)arg10 peopleIdentifiers:(id)arg11 sound:(id)arg12 userInfo:(id)arg13 threadIdentifier:(id)arg14 summaryArgument:(id)arg15 summaryArgumentCount:(NSUInteger)arg16 interruptionLevel:(NSUInteger)arg17 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif