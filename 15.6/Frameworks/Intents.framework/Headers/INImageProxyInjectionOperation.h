// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INIMAGEPROXYINJECTIONOPERATION_H
#define INIMAGEPROXYINJECTIONOPERATION_H

@class NSOperation;
@protocol INImageProxyInjecting;



@interface INImageProxyInjectionOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
}


@property (copy, nonatomic) id *copyReturnBlock; // ivar: _copyReturnBlock
@property (copy, nonatomic) id *imageProxyRequestBlock; // ivar: _imageProxyRequestBlock
@property (retain, nonatomic) NSObject<INImageProxyInjecting> *injector; // ivar: _injector


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(void)start;


@end


#endif