// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANANNOUNCEMENTCONTEXT_H
#define ANANNOUNCEMENTCONTEXT_H

@class NSString, NSURL, NSNumber, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ANAnnouncementContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *announcementAudioPath; // ivar: _announcementAudioPath
@property (readonly, nonatomic) NSURL *announcementAudioURL; // ivar: _announcementAudioURL
@property (readonly, nonatomic) NSString *announcementID; // ivar: _announcementID
@property (readonly, nonatomic) NSString *announcerID; // ivar: _announcerID
@property (readonly, nonatomic) BOOL announcerIsAccessory; // ivar: _announcerIsAccessory
@property (readonly, nonatomic) NSString *announcerName; // ivar: _announcerName
@property (readonly, nonatomic) NSString *announcerUserID; // ivar: _announcerUserID
@property (readonly, nonatomic) NSString *announcerUserUniqueID; // ivar: _announcerUserUniqueID
@property (readonly, nonatomic) NSNumber *audioFileDuration; // ivar: _audioFileDuration
@property (readonly, nonatomic) NSDictionary *contextDictionary;
@property (readonly, nonatomic) int deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) NSString *homeID; // ivar: _homeID
@property (readonly, nonatomic) NSString *homeName; // ivar: _homeName
@property (readonly, nonatomic) BOOL played; // ivar: _played
@property (readonly, nonatomic) int productType; // ivar: _productType
@property (readonly, nonatomic) NSUInteger productTypeOverride; // ivar: _productTypeOverride
@property (readonly, nonatomic) NSDictionary *rooms; // ivar: _rooms
@property (readonly, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *transcriptionText; // ivar: _transcriptionText
@property (readonly, nonatomic) NSDictionary *zones; // ivar: _zones


+(BOOL)supportsSecureCoding;
+(id)contextFromDictionary:(id)arg0 ;
+(id)contextFromUserInfo:(id)arg0 ;
-(BOOL)isEqualToContext:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithUserInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif