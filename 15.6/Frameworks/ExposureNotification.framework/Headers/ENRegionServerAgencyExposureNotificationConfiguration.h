// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENREGIONSERVERAGENCYEXPOSURENOTIFICATIONCONFIGURATION_H
#define ENREGIONSERVERAGENCYEXPOSURENOTIFICATIONCONFIGURATION_H

@class NSString, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ENRegionServerAgencyExposureNotificationConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *classificationName; // ivar: _classificationName
@property (readonly, copy, nonatomic) NSURL *classificationURL; // ivar: _classificationURL
@property (readonly, copy, nonatomic) NSString *localizedExposureDetailBody; // ivar: _localizedExposureDetailBody
@property (readonly, copy, nonatomic) NSString *localizedNotificationBody; // ivar: _localizedNotificationBody
@property (readonly, copy, nonatomic) NSString *localizedNotificationSubject; // ivar: _localizedNotificationSubject


+(BOOL)getNotificationConfiguration:(*id)arg0 fromDictionary:(id)arg1 locale:(id)arg2 index:(unsigned char)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif