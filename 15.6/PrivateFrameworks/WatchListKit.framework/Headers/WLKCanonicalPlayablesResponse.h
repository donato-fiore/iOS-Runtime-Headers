// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKCANONICALPLAYABLESRESPONSE_H
#define WLKCANONICALPLAYABLESRESPONSE_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface WLKCanonicalPlayablesResponse : NSObject

@property (readonly, copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSArray *playables; // ivar: _playables
@property (readonly, nonatomic, getter=isWatchListable) BOOL watchListable; // ivar: _watchListable
@property (readonly, nonatomic, getter=isWatchListed) BOOL watchListed; // ivar: _watchListed


+(id)_parseChannelsFromPayload:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSiriResponse:(id)arg0 statsID:(id)arg1 ;


@end


#endif