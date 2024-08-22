// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTAPTORADARREQUEST_H
#define PKTAPTORADARREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKTapToRadarRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *alertHeader; // ivar: _alertHeader
@property (copy, nonatomic) NSString *alertMessage; // ivar: _alertMessage
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (copy, nonatomic) NSString *relatedRadar; // ivar: _relatedRadar
@property (nonatomic, getter=isServerGenerated) BOOL serverGenerated; // ivar: _serverGenerated


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif