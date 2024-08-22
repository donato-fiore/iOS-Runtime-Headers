// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKUPNEXTWIDGETREQUESTOPERATION_H
#define WLKUPNEXTWIDGETREQUESTOPERATION_H



#import "WLKUTSNetworkRequestOperation.h"
#import "WLKUpNextItemCollection.h"

@interface WLKUpNextWidgetRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) WLKUpNextItemCollection *itemCollection; // ivar: _itemCollection


-(id)init;
-(id)initWithQueryParameters:(id)arg0 options:(NSInteger)arg1 ;
-(void)processResponse;


@end


#endif