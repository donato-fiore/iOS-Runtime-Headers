// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFTELEPHONYURLHANDLER_H
#define SFTELEPHONYURLHANDLER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface SFTelephonyURLHandler : NSObject

@property (retain, nonatomic) NSMutableSet *pendingRequests; // ivar: _pendingRequests


+(id)sharedInstance;
-(BOOL)openURLForDialRequest:(id)arg0 withScene:(id)arg1 completionHandler:(id)arg2 ;
-(id)init;
-(void)addObserverForRequest:(id)arg0 ;
-(void)removeObserverForRequest:(id)arg0 ;


@end


#endif