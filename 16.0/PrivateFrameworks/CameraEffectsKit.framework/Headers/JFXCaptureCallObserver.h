// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXCAPTURECALLOBSERVER_H
#define JFXCAPTURECALLOBSERVER_H

@class CXCallObserver, NSString;
@protocol CXCallObserverDelegate;

#import <Foundation/Foundation.h>


@interface JFXCaptureCallObserver : NSObject <CXCallObserverDelegate>



@property (readonly, nonatomic) NSInteger callCount;
@property (retain, nonatomic) CXCallObserver *callObserver; // ivar: _callObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;


@end


#endif