// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSDIALOGACTION_H
#define AMSDIALOGACTION_H

@class NSDictionary, NSString, NSURL, NSURLRequest, NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AMSDialogRequest.h"
#import "AMSMetricsEvent.h"

@interface AMSDialogAction : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, setter=ams_setURLType:) NSInteger ams_URLType;
@property (nonatomic, setter=ams_setActionType:) NSInteger ams_actionType;
@property (retain, nonatomic, setter=ams_setButtonDictionary:) NSDictionary *ams_buttonDictionary;
@property (retain, nonatomic, setter=ams_setBuyParams:) NSString *ams_buyParams;
@property (nonatomic, setter=ams_setCommerceUIURL:) BOOL ams_commerceUIURL;
@property (retain, nonatomic, setter=ams_setMetricsDictionary:) NSDictionary *ams_metricsDictionary;
@property (retain, nonatomic, setter=ams_setRawURL:) NSURL *ams_rawURL;
@property (nonatomic, setter=ams_setResolvedInterruption:) BOOL ams_resolvedInterruption;
@property (nonatomic, setter=ams_setShouldRetry:) BOOL ams_shouldRetry;
@property (retain, nonatomic, setter=ams_setSubtarget:) NSString *ams_subtarget;
@property (nonatomic, setter=ams_setTidContinue:) BOOL ams_tidContinue;
@property (copy, nonatomic) NSURL *deepLink; // ivar: _deepLink
@property (copy, nonatomic) AMSDialogRequest *dialogRequest; // ivar: _dialogRequest
@property (copy, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL inferLinkDestination; // ivar: _inferLinkDestination
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent; // ivar: _metricsEvent
@property (copy, nonatomic) NSURLRequest *request; // ivar: _request
@property (nonatomic) BOOL shouldRetry; // ivar: _shouldRetry
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)actionWithTitle:(id)arg0 ;
+(id)actionWithTitle:(id)arg0 identifier:(id)arg1 ;
+(id)actionWithTitle:(id)arg0 style:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif