// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFENDNETWORKSEARCHFEEDBACK_H
#define SFENDNETWORKSEARCHFEEDBACK_H

@class NSDictionary;


#import "SFEndSearchFeedback.h"

@interface SFEndNetworkSearchFeedback : SFEndSearchFeedback

@property (copy, nonatomic) NSDictionary *networkTimingData; // ivar: _networkTimingData
@property (nonatomic) NSInteger responseSize; // ivar: _responseSize
@property (nonatomic) NSInteger statusCode; // ivar: _statusCode


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartSearch:(id)arg0 responseSize:(NSInteger)arg1 statusCode:(NSInteger)arg2 networkTimingData:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif