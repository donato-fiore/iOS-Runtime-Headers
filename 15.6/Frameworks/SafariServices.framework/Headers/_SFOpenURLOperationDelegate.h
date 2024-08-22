// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFOPENURLOPERATIONDELEGATE_H
#define _SFOPENURLOPERATIONDELEGATE_H

@class NSString;
@protocol LSOpenResourceOperationDelegate;

#import <Foundation/Foundation.h>


@interface _SFOpenURLOperationDelegate : NSObject <LSOpenResourceOperationDelegate>

 {
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCompletionHandler:(id)arg0 ;
-(void)_didFinishWithSuccess:(BOOL)arg0 ;
-(void)openResourceOperation:(id)arg0 didFailWithError:(id)arg1 ;
-(void)openResourceOperation:(id)arg0 didFinishCopyingResource:(id)arg1 ;
-(void)openResourceOperationDidComplete:(id)arg0 ;


@end


#endif