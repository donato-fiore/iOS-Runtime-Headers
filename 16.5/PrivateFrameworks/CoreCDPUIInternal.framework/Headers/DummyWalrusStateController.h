// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DUMMYWALRUSSTATECONTROLLER_H
#define DUMMYWALRUSSTATECONTROLLER_H

@class NSString;
@protocol CDPWalrusStatusProvider, CDPWalrusStatusUpdater;

#import <Foundation/Foundation.h>


@interface DummyWalrusStateController : NSObject <CDPWalrusStatusProvider, CDPWalrusStatusUpdater>

 {
    NSUInteger walrusStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)walrusStatus:(*id)arg0 ;
-(id)init;
-(void)updateWalrusStatus:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)walrusStatusWithCompletion:(id)arg0 ;


@end


#endif