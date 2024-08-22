// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKCANONICALPLAYABLESSIRIRESPONSE_H
#define WLKCANONICALPLAYABLESSIRIRESPONSE_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface WLKCanonicalPlayablesSiriResponse : NSObject

@property (copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (retain, nonatomic) NSArray *playables; // ivar: _playables
@property (nonatomic, getter=isWatchListable) BOOL watchListable; // ivar: _watchListable
@property (nonatomic, getter=isWatchListed) BOOL watchListed; // ivar: _watchListed


+(id)_parseChannelsFromPayload:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 statsID:(id)arg1 ;


@end


#endif