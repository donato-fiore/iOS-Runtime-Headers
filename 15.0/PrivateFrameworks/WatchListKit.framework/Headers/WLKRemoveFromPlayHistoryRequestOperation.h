// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKREMOVEFROMPLAYHISTORYREQUESTOPERATION_H
#define WLKREMOVEFROMPLAYHISTORYREQUESTOPERATION_H

@class NSString;


#import "WLKUTSNetworkRequestOperation.h"

@interface WLKRemoveFromPlayHistoryRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *deleteID; // ivar: _deleteID


-(id)initWithDeleteID:(id)arg0 caller:(id)arg1 isContinueWatching:(BOOL)arg2 ;
-(id)initWithItemID:(id)arg0 ;


@end


#endif