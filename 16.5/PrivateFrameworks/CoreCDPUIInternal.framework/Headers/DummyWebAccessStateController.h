// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DUMMYWEBACCESSSTATECONTROLLER_H
#define DUMMYWEBACCESSSTATECONTROLLER_H

@class NSString;
@protocol CDPWebAccessStatusProvider, CDPWebAccessStatusUpdater;

#import <Foundation/Foundation.h>


@interface DummyWebAccessStateController : NSObject <CDPWebAccessStatusProvider, CDPWebAccessStatusUpdater>

 {
    NSUInteger webAccessStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)webAccessStatus:(*id)arg0 ;
-(id)init;
-(void)updateWebAccessStatus:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)webAccessStatusWithCompletion:(id)arg0 ;


@end


#endif