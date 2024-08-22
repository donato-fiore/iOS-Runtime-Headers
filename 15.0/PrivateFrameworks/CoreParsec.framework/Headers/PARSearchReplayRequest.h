// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PARSEARCHREPLAYREQUEST_H
#define PARSEARCHREPLAYREQUEST_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;


#import "PARSearchRequest.h"

@interface PARSearchReplayRequest : PARSearchRequest <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *replayHeaderItems; // ivar: _replayHeaderItems
@property (copy, nonatomic) NSString *replaySearchURL; // ivar: _replaySearchURL


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif