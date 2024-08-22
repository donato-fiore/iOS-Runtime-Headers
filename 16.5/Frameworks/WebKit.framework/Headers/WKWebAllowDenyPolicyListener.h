// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKWEBALLOWDENYPOLICYLISTENER_H
#define WKWEBALLOWDENYPOLICYLISTENER_H

@class NSString;
@protocol WKWebAllowDenyPolicyListener;

#import <Foundation/Foundation.h>


@interface WKWebAllowDenyPolicyListener : NSObject <WKWebAllowDenyPolicyListener>

 {
    Function<void (bool)> _completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCompletionHandler:(*void)arg0 ;
-(void)allow;
-(void)deny;


@end


#endif