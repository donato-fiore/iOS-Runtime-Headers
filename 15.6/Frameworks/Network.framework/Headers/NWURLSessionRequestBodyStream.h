// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWURLSESSIONREQUESTBODYSTREAM_H
#define NWURLSESSIONREQUESTBODYSTREAM_H

@class NSString;
@protocol NWURLSessionRequestBodyProvider;

#import <Foundation/Foundation.h>


@interface NWURLSessionRequestBodyStream : NSObject <NWURLSessionRequestBodyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)readMinimumLength:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif