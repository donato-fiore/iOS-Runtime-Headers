// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKMARKASWATCHEDREQUESTOPERATION_H
#define WLKMARKASWATCHEDREQUESTOPERATION_H

@class NSString;


#import "WLKUTSNetworkRequestOperation.h"

@interface WLKMarkAsWatchedRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *brandID; // ivar: _brandID
@property (readonly, copy, nonatomic) NSString *itemID; // ivar: _itemID


-(id)initWithItemID:(id)arg0 ;


@end


#endif