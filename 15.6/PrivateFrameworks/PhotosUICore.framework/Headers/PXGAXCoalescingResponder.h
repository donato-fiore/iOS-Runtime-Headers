// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGAXCOALESCINGRESPONDER_H
#define PXGAXCOALESCINGRESPONDER_H

@class NSMutableArray, NSString;
@protocol PXGAXResponder;

#import <Foundation/Foundation.h>


@interface PXGAXCoalescingResponder : NSObject <PXGAXResponder>

 {
    NSMutableArray *_pendingAXEventBlocks;
}


@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder; // ivar: axNextResponder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pauseEventDelivery; // ivar: _pauseEventDelivery
@property (readonly) Class superclass;


-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(id)axContainingScrollViewForAXGroup:(id)arg0 ;
-(void)_distributeEvents;
-(void)_notifyResponder:(id)arg0 ;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;


@end


#endif