// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AEINVALIDATIONROUTER_H
#define AEINVALIDATIONROUTER_H

@class NSError;
@protocol OS_dispatch_queue, AEInvalidationRouterDelegate;

#import <Foundation/Foundation.h>


@interface AEInvalidationRouter : NSObject {
    BOOL _processedInvalidation;
    BOOL _forwardError;
    NSObject<OS_dispatch_queue> *_queue;
    id<AEInvalidationRouterDelegate> *_delegate;
    NSInteger _mode;
    NSError *_storedError;
}


@property (readonly, nonatomic) id *invalidationHandler;


-(id)initWithQueue:(id)arg0 ;
-(void)fetchCapturedErrorWithCompletion:(id)arg0 ;
-(void)setRouterDelegate:(id)arg0 ;
-(void)setRouterMode:(NSInteger)arg0 ;


@end


#endif