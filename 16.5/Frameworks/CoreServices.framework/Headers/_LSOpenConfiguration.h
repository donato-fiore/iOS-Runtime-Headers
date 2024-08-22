// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSOPENCONFIGURATION_H
#define _LSOPENCONFIGURATION_H

@class UISClickAttribution, NSDictionary, UISPasteSharingToken, NSURL, BSServiceConnectionEndpoint;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LSOpenConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL allowURLOverrides; // ivar: _allowURLOverrides
@property (retain, nonatomic) UISClickAttribution *clickAttribution; // ivar: _clickAttribution
@property (copy, nonatomic) NSDictionary *frontBoardOptions; // ivar: _frontBoardOptions
@property (nonatomic) BOOL ignoreAppLinkEnabledProperty; // ivar: _ignoreAppLinkEnabledProperty
@property (nonatomic) BOOL ignoreOpenStrategy;
@property (retain, nonatomic) UISPasteSharingToken *pasteSharingToken; // ivar: _pasteSharingToken
@property (copy, nonatomic) NSURL *referrerURL; // ivar: _referrerURL
@property (nonatomic, getter=isSensitive) BOOL sensitive; // ivar: _sensitive
@property (retain, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint; // ivar: _targetConnectionEndpoint


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif