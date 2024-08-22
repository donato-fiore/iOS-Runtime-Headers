// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKWEBALLOWDENYPOLICYLISTENER_H
#define WKWEBALLOWDENYPOLICYLISTENER_H

@class NSString;
@protocol WebAllowDenyPolicyListener;

#import <Foundation/Foundation.h>


@interface WKWebAllowDenyPolicyListener : NSObject <WebAllowDenyPolicyListener>

 {
    Function<void (bool)> _completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldClearCache;
-(id)initWithCompletionHandler:(*void)arg0 ;
-(void)allow;
-(void)deny;
-(void)denyOnlyThisRequest;


@end


#endif