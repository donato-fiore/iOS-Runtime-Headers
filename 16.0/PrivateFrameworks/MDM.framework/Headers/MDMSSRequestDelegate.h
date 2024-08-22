// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMSSREQUESTDELEGATE_H
#define MDMSSREQUESTDELEGATE_H

@class NSTimer, NSString, SSRequest;
@protocol SSRequestDelegate;

#import <Foundation/Foundation.h>


@interface MDMSSRequestDelegate : NSObject <SSRequestDelegate>

 {
    id *_completionBlock;
    NSTimer *_timeoutTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) SSRequest *request; // ivar: _request
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 ;
-(void)_startTimeout:(CGFloat)arg0 completionBlock:(id)arg1 ;
-(void)_timerDidFire:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)requestDidFinish:(id)arg0 ;


@end


#endif