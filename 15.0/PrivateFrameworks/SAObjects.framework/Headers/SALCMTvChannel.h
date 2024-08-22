// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALCMTVCHANNEL_H
#define SALCMTVCHANNEL_H

@class NSString, NSURL;


#import "SADomainObject.h"

@interface SALCMTvChannel : SADomainObject

@property (copy, nonatomic) NSString *callSign;
@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *streamUrl;


+(id)tvChannel;
+(id)tvChannelWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif