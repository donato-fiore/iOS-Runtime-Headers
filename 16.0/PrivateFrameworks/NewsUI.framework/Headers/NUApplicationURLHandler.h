// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUAPPLICATIONURLHANDLER_H
#define NUAPPLICATIONURLHANDLER_H

@class NSString;
@protocol NUURLHandling;

#import <Foundation/Foundation.h>


@interface NUApplicationURLHandler : NSObject <NUURLHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)openURL:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif