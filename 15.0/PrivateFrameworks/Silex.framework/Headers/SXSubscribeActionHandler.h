// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXSUBSCRIBEACTIONHANDLER_H
#define SXSUBSCRIBEACTIONHANDLER_H

@class NSString;
@protocol SXSubscribeActionHandler;

#import <Foundation/Foundation.h>


@interface SXSubscribeActionHandler : NSObject <SXSubscribeActionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)handleSubscribeActionOnPresenter:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif