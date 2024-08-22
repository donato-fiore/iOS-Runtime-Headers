// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUISERVERHOOKHANDLERDELEGATE_H
#define AAUISERVERHOOKHANDLERDELEGATE_H

@class NSString;
@protocol RUIServerHookHandlerDelegate;

#import <Foundation/Foundation.h>


@interface AAUIServerHookHandlerDelegate : NSObject <RUIServerHookHandlerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)serverHookHandler:(id)arg0 isUserCancelError:(id)arg1 ;


@end


#endif