// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXCOMPLETIONHANDLERMANAGER_H
#define _PXCOMPLETIONHANDLERMANAGER_H

@class NSMutableArray;
@protocol _PXCompletionHandlerManagerDelegate;

#import <Foundation/Foundation.h>


@interface _PXCompletionHandlerManager : NSObject {
    NSMutableArray *_completionHandlers;
}


@property (weak, nonatomic) NSObject<_PXCompletionHandlerManagerDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)_handleTimeoutOfCompletionHandler:(id)arg0 ;
-(void)addCompletionHandler:(id)arg0 ;
-(void)callCompletionHandlers;


@end


#endif