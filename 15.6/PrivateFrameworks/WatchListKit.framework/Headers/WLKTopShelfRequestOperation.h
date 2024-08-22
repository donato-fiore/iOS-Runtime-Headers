// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKTOPSHELFREQUESTOPERATION_H
#define WLKTOPSHELFREQUESTOPERATION_H

@class NSArray;


#import "WLKUTSNetworkRequestOperation.h"

@interface WLKTopShelfRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSArray *items; // ivar: _items


-(id)init;
-(id)initWithQueryParameters:(id)arg0 options:(NSInteger)arg1 ;
-(void)processResponse;


@end


#endif