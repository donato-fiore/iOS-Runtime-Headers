// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKCHANNELSRESPONSE_H
#define WLKCHANNELSRESPONSE_H

@class NSDictionary, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface WLKChannelsResponse : NSObject

@property (retain, nonatomic) NSDictionary *channels; // ivar: _channels
@property (nonatomic) NSUInteger environmentHash; // ivar: _environmentHash
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic) BOOL filtered; // ivar: _filtered
@property (retain, nonatomic) NSArray *orderedChannels; // ivar: _orderedChannels


+(id)parseChannelsFromPayload:(id)arg0 ;
-(BOOL)isValidForFiltered:(BOOL)arg0 ;
-(id)initWithDictionary:(id)arg0 expirationDate:(id)arg1 environmentHash:(NSUInteger)arg2 filtered:(BOOL)arg3 ;


@end


#endif