// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKCHANNELRESPONSE_H
#define WLKCHANNELRESPONSE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface WLKChannelResponse : NSObject

@property (retain, nonatomic) NSString *channelLink; // ivar: _channelLink
@property (retain, nonatomic) NSString *channelTitle; // ivar: _channelTitle
@property (nonatomic) NSUInteger environmentHash; // ivar: _environmentHash
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate


-(id)initWithDictionary:(id)arg0 expirationDate:(id)arg1 environmentHash:(NSUInteger)arg2 ;


@end


#endif