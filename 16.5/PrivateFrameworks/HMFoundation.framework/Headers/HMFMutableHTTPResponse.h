// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFMUTABLEHTTPRESPONSE_H
#define HMFMUTABLEHTTPRESPONSE_H

@class NSData;


#import "HMFHTTPResponse.h"

@interface HMFMutableHTTPResponse : HMFHTTPResponse

@property (copy, nonatomic) NSData *body;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setHeaderValue:(id)arg0 forHeaderKey:(id)arg1 ;


@end


#endif