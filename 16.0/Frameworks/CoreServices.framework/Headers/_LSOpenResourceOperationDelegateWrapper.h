// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSOPENRESOURCEOPERATIONDELEGATEWRAPPER_H
#define _LSOPENRESOURCEOPERATIONDELEGATEWRAPPER_H

@class NSOperation, NSString;
@protocol LSOpenResourceOperationDelegate;

#import <Foundation/Foundation.h>


@interface _LSOpenResourceOperationDelegateWrapper : NSObject <LSOpenResourceOperationDelegate>

 {
    NSOperation *_operation;
    id<LSOpenResourceOperationDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithOperation:(id)arg0 wrappedDelegate:(id)arg1 ;
-(void)openResourceOperation:(id)arg0 didFailWithError:(id)arg1 ;
-(void)openResourceOperation:(id)arg0 didFinishCopyingResource:(id)arg1 ;
-(void)openResourceOperationDidComplete:(id)arg0 ;


@end


#endif