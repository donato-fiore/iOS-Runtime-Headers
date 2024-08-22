// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWURLSESSIONREQUESTBODYDATA_H
#define NWURLSESSIONREQUESTBODYDATA_H

@class NSString;
@protocol NWURLSessionRequestBodyProvider, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface NWURLSessionRequestBodyData : NSObject <NWURLSessionRequestBodyProvider>

 {
    NSObject<OS_dispatch_data> *_data;
    NSUInteger _length;
    NSUInteger _offset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)readMinimumIncompleteLength:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif