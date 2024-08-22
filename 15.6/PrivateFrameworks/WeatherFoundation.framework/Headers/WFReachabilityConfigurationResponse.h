// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREACHABILITYCONFIGURATIONRESPONSE_H
#define WFREACHABILITYCONFIGURATIONRESPONSE_H

@class NWPathEvaluator, NSURL;
@protocol NSSecureCoding;


#import "WFResponse.h"

@interface WFReachabilityConfigurationResponse : WFResponse <NSSecureCoding>



@property (readonly, nonatomic) NWPathEvaluator *pathEvaluator;
@property (copy, nonatomic) NSURL *reachabilityHostURL; // ivar: _reachabilityHostURL


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif