// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLFACEBOOKREQUEST_H
#define SLFACEBOOKREQUEST_H

@class NSString;


#import "SLRequest.h"

@interface SLFacebookRequest : SLRequest

@property (retain) NSString *accessToken;
@property int responseDataFormat;


-(id)initWithURL:(id)arg0 parameters:(id)arg1 requestMethod:(NSInteger)arg2 ;
-(id)preparedURLRequest;
-(void)preflightRequest;


@end


#endif