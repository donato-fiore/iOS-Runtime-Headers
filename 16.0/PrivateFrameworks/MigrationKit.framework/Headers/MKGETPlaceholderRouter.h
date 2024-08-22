// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKGETPLACEHOLDERROUTER_H
#define MKGETPLACEHOLDERROUTER_H

@class NSString;
@protocol MKHTTPRouter;

#import <Foundation/Foundation.h>


@interface MKGETPlaceholderRouter : NSObject <MKHTTPRouter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)server:(id)arg0 didReceiveRequest:(id)arg1 response:(id)arg2 ;


@end


#endif