// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKCONTENTPLAYREQUEST_H
#define WLKCONTENTPLAYREQUEST_H

@class NSString;


#import "WLKRequest.h"

@interface WLKContentPlayRequest : WLKRequest

@property (readonly, copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID


-(id)initWithCanonicalID:(id)arg0 ;
-(void)makeRequestWithCompletion:(id)arg0 ;


@end


#endif