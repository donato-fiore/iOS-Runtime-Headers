// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQINLINETIP_H
#define ICQINLINETIP_H

@class NSArray, NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICQTipCriteria.h"
#import "ICQTipIcon.h"

@interface ICQInlineTip : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) NSString *anchor; // ivar: _anchor
@property (copy, nonatomic) NSString *arrowConfiguration; // ivar: _arrowConfiguration
@property (retain, nonatomic) ICQTipCriteria *criteria; // ivar: _criteria
@property (retain, nonatomic) NSURL *dismissURL; // ivar: _dismissURL
@property (retain, nonatomic) NSURL *displayURL; // ivar: _displayURL
@property (retain, nonatomic) ICQTipIcon *icon; // ivar: _icon
@property (copy, nonatomic) NSString *id; // ivar: _id
@property (copy, nonatomic) NSString *subTitle; // ivar: _subTitle
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)downwardArrowConfigurationStrings;
+(id)upwardArrowConfigurationStrings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif