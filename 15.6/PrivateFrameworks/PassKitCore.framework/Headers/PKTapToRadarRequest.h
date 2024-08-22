// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTAPTORADARREQUEST_H
#define PKTAPTORADARREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKTapToRadarRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (copy, nonatomic) NSString *relatedRadar; // ivar: _relatedRadar


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif