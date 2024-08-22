// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENEXPOSURENOTIFICATION_H
#define ENEXPOSURENOTIFICATION_H

@class NSDate, NSUUID, NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ENExposureClassification.h"
#import "ENRegion.h"

@interface ENExposureNotification : NSObject <NSSecureCoding>

 {
    NSDate *_legacyDate;
}


@property (retain, nonatomic) ENExposureClassification *classification; // ivar: _classification
@property (readonly, copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSURL *learnMoreURL; // ivar: _learnMoreURL
@property (copy, nonatomic) NSString *localizedBodyText; // ivar: _localizedBodyText
@property (copy, nonatomic) NSString *localizedDetailBodyText; // ivar: _localizedDetailBodyText
@property (copy, nonatomic) NSString *localizedSubjectText; // ivar: _localizedSubjectText
@property (copy, nonatomic) NSDate *notificationDate; // ivar: _notificationDate
@property (copy, nonatomic) ENRegion *region; // ivar: _region
@property (nonatomic) BOOL revoked; // ivar: _revoked


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif