// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNAMBOBSERVER_H
#define _CNAMBOBSERVER_H

@class NSString;
@protocol CNObserver, _CNAmbObserverDelegate;

#import <Foundation/Foundation.h>


@interface _CNAmbObserver : NSObject <CNObserver>

 {
    id<CNObserver> *_observer;
    id<_CNAmbObserverDelegate> *_delegate;
    BOOL _isWinner;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithObserver:(id)arg0 delegate:(id)arg1 ;
-(void)declareWinner;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif