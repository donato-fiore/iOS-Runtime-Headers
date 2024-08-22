// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCNETWORKPROVIDER_H
#define BCNETWORKPROVIDER_H

@class NSURLSession, NSString;
@protocol BCNetworkProviderProtocol;

#import <Foundation/Foundation.h>


@interface BCNetworkProvider : NSObject <BCNetworkProviderProtocol>

 {
    NSURLSession *_session;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)performDataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif