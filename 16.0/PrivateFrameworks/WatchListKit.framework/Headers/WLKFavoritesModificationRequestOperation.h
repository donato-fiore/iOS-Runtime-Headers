// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKFAVORITESMODIFICATIONREQUESTOPERATION_H
#define WLKFAVORITESMODIFICATIONREQUESTOPERATION_H

@class NSString;


#import "WLKUTSNetworkRequestOperation.h"

@interface WLKFavoritesModificationRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSUInteger action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *entityID; // ivar: _entityID


-(id)initWithAction:(NSUInteger)arg0 entityId:(id)arg1 caller:(id)arg2 ;
-(void)processResponse;


@end


#endif