// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKPLAYACTIVITYDECORATEVODOPERATION_H
#define WLKPLAYACTIVITYDECORATEVODOPERATION_H

@class NSDictionary, NSArray;


#import "WLKUTSNetworkRequestOperation.h"

@interface WLKPlayActivityDecorateVODOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSDictionary *metadataByIdentifier; // ivar: _metadataByIdentifier
@property (readonly, copy, nonatomic) NSArray *playActivityIdentifiers; // ivar: _playActivityIdentifiers


+(id)identifierForPlayActivityID:(id)arg0 channelID:(id)arg1 duration:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 ;
-(void)processResponse;


@end


#endif