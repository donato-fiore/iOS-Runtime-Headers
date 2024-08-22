// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFHTTPREQUESTHANDLER_H
#define HMFHTTPREQUESTHANDLER_H

@class NSPredicate;


#import "HMFObject.h"

@interface HMFHTTPRequestHandler : HMFObject

@property (readonly, copy, nonatomic) NSPredicate *URLPredicate; // ivar: _URLPredicate
@property (readonly, copy, nonatomic) id *matchBlock; // ivar: _matchBlock
@property (readonly, copy, nonatomic) NSPredicate *methodPredicate; // ivar: _methodPredicate
@property (copy, nonatomic) id *requestBlock; // ivar: _requestBlock


+(BOOL)_isValidMethodPrediate:(id)arg0 ;
+(BOOL)_isValidURLPredicate:(id)arg0 ;
-(id)init;
-(id)initWithMethodPredicate:(id)arg0 URLPredicate:(id)arg1 matchBlock:(id)arg2 ;


@end


#endif