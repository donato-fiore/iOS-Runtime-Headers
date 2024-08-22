// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKAPPSETTINGS_H
#define WLKAPPSETTINGS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WLKAppSettings : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger accessStatus; // ivar: _accessStatus
@property (readonly, nonatomic) NSString *channelID; // ivar: _channelID
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *externalID; // ivar: _externalID
@property (nonatomic) BOOL obsolete; // ivar: _obsolete


+(BOOL)isExternalID:(id)arg0 equalToExternalID:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAppSettings:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONDictionary;
-(id)_statusStrings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithChannelID:(id)arg0 accessStatus:(NSUInteger)arg1 displayName:(id)arg2 externalID:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif