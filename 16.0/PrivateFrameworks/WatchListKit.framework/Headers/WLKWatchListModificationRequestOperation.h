// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKWATCHLISTMODIFICATIONREQUESTOPERATION_H
#define WLKWATCHLISTMODIFICATIONREQUESTOPERATION_H

@class NSString;


#import "WLKUTSNetworkRequestOperation.h"
#import "WLKWatchListModificationResponse.h"

@interface WLKWatchListModificationRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSUInteger action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *itemID; // ivar: _itemID
@property (readonly, nonatomic) WLKWatchListModificationResponse *response; // ivar: _response


-(id)_initWithAction:(NSUInteger)arg0 identifier:(id)arg1 identifierType:(id)arg2 brandID:(id)arg3 caller:(id)arg4 ;
-(id)initWithAction:(NSUInteger)arg0 canonicalID:(id)arg1 caller:(id)arg2 ;
-(id)initWithAction:(NSUInteger)arg0 channelID:(id)arg1 externalID:(id)arg2 caller:(id)arg3 ;
-(id)initWithAction:(NSUInteger)arg0 statsID:(id)arg1 caller:(id)arg2 ;
-(void)processResponse;


@end


#endif